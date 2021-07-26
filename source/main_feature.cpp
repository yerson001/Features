#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(){

  VideoCapture cap("/home/yerson/Opencv/Features/build/video.mp4");

  if(!cap.isOpened()){
    cout << "Error opening video stream" << endl;
        return -1;
  }

  while(1){
    Mat frame;
    cap >> frame;
    if (frame.empty())
      break;

    //video.write(frame);

    imshow( "Frame", frame );

    char c = (char)waitKey(1);
    if( c == 27 )
      break;
  }

  destroyAllWindows();
  return 0;
}
