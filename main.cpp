#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>   

using namespace cv;

int main(int argc, char** argv) {
    std::cout << "Running main\n";
    Mat image = imread("C:/Users/dsdyl/Pictures/jmonkg.png",IMREAD_COLOR);

    //Image error checking.
    if(image.empty()){
        std::cout << "Image not found\n";
        std::cin.get();
        return(-1);
    }

    //Define pointers to access individual pixels
    uint8_t* pixelPtr = (uint8_t*)image.data;

    int pixelCount = image.rows * image.cols;

    //Iterate accross each pixel.
    for(int i = 0; i < pixelCount; i++) {
    pixelPtr[i] = pixelPtr[i] + 100; //Modifies look of each pixel
    }

    //Displays image 
    imshow("First image", image);
    waitKey(0); //Waits with image open
    std::cout << "Hello World!\n";
    return 0;
}