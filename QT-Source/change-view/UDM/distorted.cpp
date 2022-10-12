//
// Created by RUBO on 2022/10/6.
//
#include "QMessageBox"
#include "QFileDialog"
#include "file.h"
#include "all.h"
#include "distorted.h"
#include "QTimer"
#include "QFuture"
#include "udm.h"
string dir;
        int conor_width ;
        int conor_high ;

        double distorted_parameter[11];


        string pic0_name;


int get_distorted_mat(string pic_name[], string pic_name_ok[], int pic_num, int conor_width, int conor_high,
                      double parameter[]) {
    int ok_pic = 0;
       Size image_size;  /* ͼ��ĳߴ� */
       Size board_size = Size(conor_width, conor_high);   //6 4 10 7 9 6   69 68 68/* �궨����ÿ�С��еĽǵ��� */
       vector<Point2f> image_points_buf;  /* ����ÿ��ͼ���ϼ�⵽�Ľǵ� */
       vector<vector<Point2f>> image_points_seq; /* �����⵽�����нǵ� */
       for (int image_count = 0; image_count < pic_num; image_count++) {
           string filename = pic_name[image_count];

           Mat imageInput = imread(filename);
           if (image_count == 0)  //�����һ��ͼƬʱ��ȡͼ������Ϣ
           {
               image_size.width = imageInput.cols;
               image_size.height = imageInput.rows;
               cout << "image_size.width = " << image_size.width << endl;
               cout << "image_size.height = " << image_size.height << endl;
           }

           /* ��ȡ�ǵ� */
           if (0 == findChessboardCorners(imageInput, board_size, image_points_buf)) {
               cout << filename << " �Ҳ����ǵ�\n"; //�Ҳ����ǵ�
           } else if (image_size.width != imageInput.cols||image_size.height != imageInput.rows) {
               cout << "ͼƬ�ߴ粻ͬ" << endl;
return -1;
           } else {
               Mat view_gray;
               cvtColor(imageInput, view_gray, COLOR_RGB2GRAY);
               /* �����ؾ�ȷ�� */
               find4QuadCornerSubpix(view_gray, image_points_buf, Size(conor_width, conor_high)); //�Դ���ȡ�Ľǵ���о�ȷ��
               image_points_seq.push_back(image_points_buf);  //���������ؽǵ�
               /* ��ͼ������ʾ�ǵ�λ�� */
               drawChessboardCorners(view_gray, board_size, image_points_buf, true); //������ͼƬ�б�ǽǵ�

               pic_name_ok[ok_pic] = filename;
               ok_pic++;

           }
       }
udm_pic.width=image_size.width;
udm_pic.high=image_size.height;

       pic_num = ok_pic;
       for(int i=0;i<ok_pic;i++)
           pic_name[i]=pic_name_ok[i];    int total = image_points_seq.size();
       cout << "total = " << total << endl;
       cout << "�ǵ���ȡ��ɣ�\n";
       //������������궨
       cout << "��ʼ�궨������������";
       /*������ά��Ϣ*/
       Size square_size = Size(10, 10);  /* ʵ�ʲ����õ��ı궨����ÿ�����̸�Ĵ�С */
       vector<vector<Point3f>> object_points; /* ����궨���Ͻǵ����ά���� */
       /*�������*/
       Mat cameraMatrix = Mat(3, 3, CV_32FC1, Scalar::all(0)); /* ������ڲ������� */
       vector<int> point_counts;  // ÿ��ͼ���нǵ������
       Mat distCoeffs = Mat(1, 5, CV_32FC1, Scalar::all(0)); /* �������5������ϵ����k1,k2,p1,p2,k3 */
       vector<Mat> tvecsMat;  /* ÿ��ͼ�����ת���� */
       vector<Mat> rvecsMat; /* ÿ��ͼ���ƽ������ */
       /* ��ʼ���궨���Ͻǵ����ά���� */
       for (int t = 0; t < pic_num; t++) {
           vector<Point3f> tempPointSet;
           for (int i = 0; i < board_size.height; i++) {
               for (int j = 0; j < board_size.width; j++) {
                   Point3f realPoint;
                   /* ����궨�������������ϵ��z=0��ƽ���� */
                   realPoint.x = i * square_size.width;
                   realPoint.y = j * square_size.height;
                   realPoint.z = 0;
                   tempPointSet.push_back(realPoint);
               }
           }
           object_points.push_back(tempPointSet);
       }
       /* ��ʼ��ÿ��ͼ���еĽǵ��������ٶ�ÿ��ͼ���ж����Կ��������ı궨�� */
       for (int i = 0; i < pic_num; i++) {
           point_counts.push_back(board_size.width * board_size.height);
       }
       /* ��ʼ�궨 */
       calibrateCamera(object_points, image_points_seq, image_size, cameraMatrix, distCoeffs, rvecsMat, tvecsMat, 0);



       cout << "����ڲ�������" << endl;
       cout << cameraMatrix << endl << endl;
       cout << "����ϵ����\n";
       cout << distCoeffs << endl << endl << endl;


       parameter[0] = image_size.width;
       parameter[1] = image_size.height;
       parameter[2] = cameraMatrix.at<double>(0, 0);
       parameter[3] = cameraMatrix.at<double>(1, 1);
       parameter[4] = cameraMatrix.at<double>(0, 2);
       parameter[5] = cameraMatrix.at<double>(1, 2);
       parameter[6] = distCoeffs.at<double>(0, 0);
       parameter[7] = distCoeffs.at<double>(0, 1);
       parameter[8] = distCoeffs.at<double>(0, 4);
       parameter[9] = distCoeffs.at<double>(0, 2);
       parameter[10] = distCoeffs.at<double>(0, 3);
       pic0_name=pic_name[0];



       ///**********�Զ�������ͼ��С**********/
       int ImgWidth = (int) distorted_parameter[0];
       int ImgHeight = (int) distorted_parameter[1];
       double fx = distorted_parameter[2]
       , fy = distorted_parameter[3]
       , ux = distorted_parameter[4]
       , uy = distorted_parameter[5]
       , k1 = distorted_parameter[6]
       , k2 = distorted_parameter[7]
       , k3 = distorted_parameter[8]
       , p1 = distorted_parameter[9]
       , p2 = distorted_parameter[10];
        udm_pic.max_x = -9999999, udm_pic.max_y = -9999999, udm_pic.min_x = 9999999, udm_pic.min_y = 9999999;
       for (int i = 0; i < ImgHeight; i++) {
           for (int j = 0; j < ImgWidth; j++) {
               double xDistortion = (j - ux) / fx;
               double yDistortion = (i - uy) / fy;

               double xCorrected, yCorrected;

               double x0 = xDistortion;
               double y0 = yDistortion;
               for (int j = 0; j < 10; j++) {
                   double r2 = xDistortion * xDistortion + yDistortion * yDistortion;

                   double distRadialA = 1 / (1. + k1 * r2 + k2 * r2 * r2 + k3 * r2 * r2 * r2);
                   double distRadialB = 1.;

                   double deltaX = 2. * p1 * xDistortion * yDistortion + p2 * (r2 + 2. * xDistortion * xDistortion);
                   double deltaY = p1 * (r2 + 2. * yDistortion * yDistortion) + 2. * p2 * xDistortion * yDistortion;

                   xCorrected = (x0 - deltaX) * distRadialA * distRadialB;
                   yCorrected = (y0 - deltaY) * distRadialA * distRadialB;

                   xDistortion = xCorrected;
                   yDistortion = yCorrected;
               }
               xCorrected = xCorrected * fx + ux;
               yCorrected = yCorrected * fy + uy;

               if (i == 0 && j == 0) {

                   udm_pic.min_x = min_int(udm_pic.min_x, xCorrected);
                   udm_pic.min_y = min_int(udm_pic.min_y, yCorrected);//����
               }
               if (i == 0 && j == ImgWidth - 1) {
                   //����
                   udm_pic.min_y = min_int(udm_pic.min_y, yCorrected);
                   udm_pic.max_x = max_int(udm_pic.min_x, xCorrected);

               }
               if (i == ImgHeight - 1 && j == 0) {
                   //����
                   udm_pic.min_x = min_int(udm_pic.min_x, xCorrected);
                   udm_pic.max_y = max_int(udm_pic.min_y, yCorrected);

               }
               if (i == ImgHeight - 1 && j == ImgWidth - 1) {
                   //����
                   udm_pic.max_x = max_int(udm_pic.min_x, xCorrected);

                   udm_pic.max_y = max_int(udm_pic.min_y, yCorrected);
               }
           }
       }


       return ok_pic;



}
