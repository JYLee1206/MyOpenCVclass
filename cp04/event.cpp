//
//  event.cpp
//  OpenCV
//
//  Created by 이준영 on 2023/09/25.
//

#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;


void keyevent(){
    Mat img = imread("lenna.bmp");
    if (img.empty()){
        cout << "empty img" << endl;
    }
    namedWindow ("img");
    imshow ("img", img);
    while (true) {
        int keycode = waitKey();
        
        if (keycode == 'i' || keycode == 'I'){
            img = ~img;
            imshow("img", img);
        }
        else if (keycode == 27 || keycode == 'q' || keycode == 'Q') {
            break;
        }
    }
}
int main(void)
{
    keyevent();
    return 0;
}
