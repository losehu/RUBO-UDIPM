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
       Size image_size;  /* 图像的尺寸 */
       Size board_size = Size(conor_width, conor_high);   //6 4 10 7 9 6   69 68 68/* 标定板上每行、列的角点数 */
       vector<Point2f> image_points_buf;  /* 缓存每幅图像上检测到的角点 */
       vector<vector<Point2f>> image_points_seq; /* 保存检测到的所有角点 */
       for (int image_count = 0; image_count < pic_num; image_count++) {
           string filename = pic_name[image_count];

           Mat imageInput = imread(filename);
           if (image_count == 0)  //读入第一张图片时获取图像宽高信息
           {
               image_size.width = imageInput.cols;
               image_size.height = imageInput.rows;
               cout << "image_size.width = " << image_size.width << endl;
               cout << "image_size.height = " << image_size.height << endl;
           }

           /* 提取角点 */
           if (0 == findChessboardCorners(imageInput, board_size, image_points_buf)) {
               cout << filename << " 找不到角点\n"; //找不到角点
           } else if (image_size.width != imageInput.cols||image_size.height != imageInput.rows) {
               cout << "图片尺寸不同" << endl;
return -1;
           } else {
               Mat view_gray;
               cvtColor(imageInput, view_gray, COLOR_RGB2GRAY);
               /* 亚像素精确化 */
               find4QuadCornerSubpix(view_gray, image_points_buf, Size(conor_width, conor_high)); //对粗提取的角点进行精确化
               image_points_seq.push_back(image_points_buf);  //保存亚像素角点
               /* 在图像上显示角点位置 */
               drawChessboardCorners(view_gray, board_size, image_points_buf, true); //用于在图片中标记角点

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
       cout << "角点提取完成！\n";
       //以下是摄像机标定
       cout << "开始标定………………";
       /*棋盘三维信息*/
       Size square_size = Size(10, 10);  /* 实际测量得到的标定板上每个棋盘格的大小 */
       vector<vector<Point3f>> object_points; /* 保存标定板上角点的三维坐标 */
       /*内外参数*/
       Mat cameraMatrix = Mat(3, 3, CV_32FC1, Scalar::all(0)); /* 摄像机内参数矩阵 */
       vector<int> point_counts;  // 每幅图像中角点的数量
       Mat distCoeffs = Mat(1, 5, CV_32FC1, Scalar::all(0)); /* 摄像机的5个畸变系数：k1,k2,p1,p2,k3 */
       vector<Mat> tvecsMat;  /* 每幅图像的旋转向量 */
       vector<Mat> rvecsMat; /* 每幅图像的平移向量 */
       /* 初始化标定板上角点的三维坐标 */
       for (int t = 0; t < pic_num; t++) {
           vector<Point3f> tempPointSet;
           for (int i = 0; i < board_size.height; i++) {
               for (int j = 0; j < board_size.width; j++) {
                   Point3f realPoint;
                   /* 假设标定板放在世界坐标系中z=0的平面上 */
                   realPoint.x = i * square_size.width;
                   realPoint.y = j * square_size.height;
                   realPoint.z = 0;
                   tempPointSet.push_back(realPoint);
               }
           }
           object_points.push_back(tempPointSet);
       }
       /* 初始化每幅图像中的角点数量，假定每幅图像中都可以看到完整的标定板 */
       for (int i = 0; i < pic_num; i++) {
           point_counts.push_back(board_size.width * board_size.height);
       }
       /* 开始标定 */
       calibrateCamera(object_points, image_points_seq, image_size, cameraMatrix, distCoeffs, rvecsMat, tvecsMat, 0);



       cout << "相机内参数矩阵：" << endl;
       cout << cameraMatrix << endl << endl;
       cout << "畸变系数：\n";
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



       ///**********自动计算结果图大小**********/
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
                   udm_pic.min_y = min_int(udm_pic.min_y, yCorrected);//左上
               }
               if (i == 0 && j == ImgWidth - 1) {
                   //右上
                   udm_pic.min_y = min_int(udm_pic.min_y, yCorrected);
                   udm_pic.max_x = max_int(udm_pic.min_x, xCorrected);

               }
               if (i == ImgHeight - 1 && j == 0) {
                   //左下
                   udm_pic.min_x = min_int(udm_pic.min_x, xCorrected);
                   udm_pic.max_y = max_int(udm_pic.min_y, yCorrected);

               }
               if (i == ImgHeight - 1 && j == ImgWidth - 1) {
                   //右下
                   udm_pic.max_x = max_int(udm_pic.min_x, xCorrected);

                   udm_pic.max_y = max_int(udm_pic.min_y, yCorrected);
               }
           }
       }


       return ok_pic;



}
