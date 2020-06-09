#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

using namespace std;
using namespace cv;

int main( int argc, const char** argv ){
  VideoCapture capture(0);
  Mat frame;
  
  if( !capture.isOpened()){
    cout << "The Camera is not open!" << endl;
    return -1;
  } else {
    cout << "the camera is activating..." << endl;
    while(true){
      capture.read(frame);
      imshow("Video Stream", frame);
      
      if(waitKey(30)==27){
        cout << "ESC key is entered...";
        break;
      }
    }
  }
  
  return 0;
}
