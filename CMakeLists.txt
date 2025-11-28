cmake_minimum_required(VERSION 3.10)
project(ImageSteganography)


#Set openCV directory location to link it to files
set(OpenCV_DIR "C:/Users/dsdyl/OneDrive/Documents/MinGWLibraryBuilds")
find_package(OpenCV REQUIRED)

# 2. Define your executable
add_executable(${PROJECT_NAME} main.cpp)

# 3. Link OpenCV to your executable
# This replaces -lopencv_core -lopencv_imgproc
target_link_libraries(${PROJECT_NAME} 
    ${OpenCV_LIBS}
    opencv_core 
    opencv_imgcodecs 
    opencv_highgui
)


