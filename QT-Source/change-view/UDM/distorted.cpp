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
string dir;
        int conor_width ;
        int conor_high ;

        double distorted_parameter[11];




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
           } else if (image_size.width != imageInput.cols) {
               cout << "ͼƬ�ߴ粻ͬ" << endl;
               exit(0);
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
       pic_num = ok_pic;
   //    pic_num =  find_corner( pic_name, pic_name_ok, pic_num,  image_size, board_size ,   image_points_buf,  image_points_seq, conor_width, conor_high);
       for(int i=0;i<ok_pic;i++)
          pic_name[i]=pic_name_ok[i];
       int total = image_points_seq.size();

pic0_name=pic_name[0];
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
       cout << "�궨��ɣ�\n";
       //�Ա궨�����������
       cout << "��ʼ���۱궨���������������\n";
       double total_err = 0.0; /* ����ͼ���ƽ�������ܺ� */
       double err = 0.0; /* ÿ��ͼ���ƽ����� */
       vector<Point2f> image_points2; /* �������¼���õ���ͶӰ�� */
       for (int i = 0; i < pic_num; i++) {
           vector<Point3f> tempPointSet = object_points[i];
           /* ͨ���õ������������������Կռ����ά���������ͶӰ���㣬�õ��µ�ͶӰ�� */
           projectPoints(tempPointSet, rvecsMat[i], tvecsMat[i], cameraMatrix, distCoeffs, image_points2);
           /* �����µ�ͶӰ��;ɵ�ͶӰ��֮������*/
           vector<Point2f> tempImagePoint = image_points_seq[i];
           Mat tempImagePointMat = Mat(1, tempImagePoint.size(), CV_32FC2);
           Mat image_points2Mat = Mat(1, image_points2.size(), CV_32FC2);
           for (int j = 0; j < tempImagePoint.size(); j++) {
               image_points2Mat.at<Vec2f>(0, j) = Vec2f(image_points2[j].x, image_points2[j].y);
               tempImagePointMat.at<Vec2f>(0, j) = Vec2f(tempImagePoint[j].x, tempImagePoint[j].y);
           }
           err = norm(image_points2Mat, tempImagePointMat, NORM_L2);
           total_err += err /= point_counts[i];
       }
       std::cout << "����ƽ����" << total_err / pic_num << "����" << endl;
       std::cout << "������ɣ�" << endl;
       Mat rotation_matrix = Mat(3, 3, CV_32FC1, Scalar::all(0)); /* ����ÿ��ͼ�����ת���� */
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
       return ok_pic;



}
