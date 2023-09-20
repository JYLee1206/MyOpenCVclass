//
//  Mat.cpp
//  OpenCV
//
//  Created by 이준영 on 2023/09/13.
//

#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void MatOp1(){
    Mat img1;
    Mat img2(480, 640, CV_8UC1);  // unsigned char, 1-channel gray
    Mat img3(480, 640, CV_8UC2);  // unsigned char, 3-channels color
    
    Mat img4(Size(640,480), CV_8UC3); //Size(width, height)
    
    Mat img5(480, 640, CV_8UC1, Scalar(128));  //initial values, 128
    Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255)); //initial values, red
                                     //B  G  R
}

void Matop2(){
    Mat img1 = imread("/Users/ijun-yeong/Desktop/디지털영상처리/OpenCV/cp03/dog.bmp");
    Mat img2 = img1;  //복사 생성자(얕은 복사)
    
    Mat img3;
    img3 = img1;      //대입 연산자(얕은 복사)
    
    Mat img4 = img1.clone(); //깊은 복사
    
    Mat img5;
    img1.copyTo(img5);
    
    img1.setTo(Scalar(0, 255, 255)); //Yellow
    
    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    imshow("img4", img4);
    imshow("img5", img5);
    waitKey();
    destroyAllWindows();
}

void Matop3(){
    Mat img1 = imread("/Users/ijun-yeong/Desktop/디지털영상처리/OpenCV/cp03/dog.bmp");
    Mat img2 = img1(Rect(220, 120, 340, 240));
    Mat img3 = img1(Rect(220, 120, 340, 240)).clone();
    Mat img4 = img1(Range(50, 100), Range(50,100));
    img2 = ~img2;
    imshow("img1",img1);
    imshow("img2",img2);
    imshow("img3",img3);
    imshow("img4",img4);
    waitKey();
    destroyAllWindows();
}
void Matop4(){
    Mat mat1 = Mat::zeros(3,4,CV_8UC1);
    
    for(int j = 0; j < mat1.rows; j++) {
        for (int i = 0; i < mat1.cols; i++) {
            mat1.at<uchar>(j, i)++;
        }
    }
    
    for(int j = 0; j < mat1.rows; j++) {
        uchar* p = mat1.ptr<uchar>(j);
        for (int i = 0; i < mat1.cols; i++){
            p[i]++;
        }
    }

}
void Matop5(){
    int p = 134;
}
int main(){
    Matop3();
    return 0;
}
