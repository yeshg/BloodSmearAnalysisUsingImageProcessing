#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

// Global variables
// Maximum slider value
const int slider_max = 1;
const int threshold_max = 255;
// Constantly updated slider value
int slider;
int threshold_slider;
// Original image
Mat img_gray;

// Callback function for trackbar event
void on_trackbar(int pos, void *)
{
	threshold_slider = pos;
	// Holds the image processed acording to value of slider
	Mat img_converted;
	// Convert color-spaces according to value of slider
	if(pos > 0) img_converted = img_gray > threshold_slider;
	else img_converted = img_gray;

	imshow("Trackbar app", img_converted);
}

int main( int argc, char** argv)
{
	// Read image
	img_gray = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);

	namedWindow("Trackbar app");

	blur(img_gray, img_gray, Size(3,3));

	imshow("Trackbar app", img_gray);

	// Initial value of slider
	slider = 0;

	// Create the trackbar
	createTrackbar("RGB <-> Grayscale", "Trackbar app", &slider, slider_max, on_trackbar);

	// Create trackbar for threshold
	createTrackbar("Change Threshold", "Trackbar app", &threshold_slider, threshold_max, on_trackbar);

	// Initialize Window
	on_trackbar(0,0);

	// Press 'q' to exit
	while(char(waitKey(1)) != 'q') {}

	return 0;
}
