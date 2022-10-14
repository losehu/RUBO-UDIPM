//
// Created by RUBO on 2022/10/6.
//

#ifndef DEDISTORTION_DISTORTED_H
#define DEDISTORTION_DISTORTED_H
#include "ty.h"
#include "QObject"
using namespace cv;
using namespace std;
int get_distorted_mat(string pic_name[], string pic_name_ok[], int pic_num, int conor_width, int conor_high,  double parameter[]) ;
void out_to_clip();


extern string dir;
     extern   int conor_width ;
       extern int conor_high ;
//cpp
  extern    double distorted_parameter[11];




#endif //DEDISTORTION_DISTORTED_H
