//
//  cp03.cpp
//  OpenCV
//
//  Created by 이준영 on 2023/09/11.
//
#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void Point_(){
    Point pt1;              // (0, 0)
    pt1.x = 5; pt1.y = 10;  // (5, 10)
    Point pt2(10, 30);      // (10, 30)
    
    Point pt3 = pt1 + pt2;  // [15, 40]
    Point pt4 = pt1 * 2;    // [10, 20]
    int d1 = pt1.dot(pt2);  // 350
    bool b1 = (pt1 == pt2); // false
    
    cout << "pt1: " << pt1 << endl;  //[5, 10]
    cout << "pt2: " << pt2 << endl;  //[10, 30]
}
void Size_(){
    
}

void Rect_(){
    Rect rc1;
    Rect rc2(10, 10, 60, 40);
    
    Rect rc3 = rc1 + Size(50, 40);
    Rect rc4 = rc2 + Point(10, 10);
    
    Rect rc5 = rc3 & rc4;
    Rect rc6 = rc3 | rc4;
    
    cout << "rc5: " << rc5 << endl;
    cout << "rc6: " << rc6 << endl;
}

void RotatedRect_(){
    RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
    Point2f pts[4];
    rr1.points(pts);
    
    Rect br = rr1.boundingRect();
}

void Range_(){
    Range r1(0, 10);
}

void String_(){
    String str1 = "Hello";
    String str2 = "World";
    String str3 = str1 + " " + str2;
    
    bool ret = (str2 == "world");
    
    Mat imgs[3];
    for (int i = 0; i < 3; i++) {
        String filename = format("test%02d.bmp", i+1);
        imgs[i] = imread(filename);
    }
}

int main(){
    return 0;
}
