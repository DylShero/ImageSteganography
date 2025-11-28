#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>   

using namespace cv;

int main(int argc, char** argv) {
    std::cout << "Running main\n";
    Mat image = imread("C:/Users/dsdyl/Pictures/jmonkg.png",IMREAD_COLOR);

    uint8_t* pixelPtr = (uint8_t*)image.data;
    int pixelCount = image.rows * image.cols;

    for(int i = 0; i < pixelCount; i++) {
    pixelPtr[i] = pixelPtr[i] + 100;
    }

    if(image.empty()){
        std::cout << "Image not found\n";
        std::cin.get();
        return(-1);
    }

    imshow("First image", image);
    waitKey(0);
    std::cout << "Hello World!\n";
    return 0;
}