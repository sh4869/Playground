#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>

using namespace cv;

int main(int argc,char** argv){
	char* imageName = argv[1];

	Mat image;
	image = imread(imageName,1);

	if( argc != 2 || !image.data){
		printf("No Image data \n");
		return -1;
	}

	Mat gray_image;
	cvtColor(image,gray_image,CV_BGR2GRAY);

	imwrite("./Gray_image.jpg",gray_image);

	namedWindow(imageName,CV_WINDOW_AUTOSIZE);
	namedWindow("Gray Image",CV_WINDOW_AUTOSIZE);

	imshow( imageName,image);
	imshow("Gray image",gray_image);

	waitKey(0);

	return 0;
}
