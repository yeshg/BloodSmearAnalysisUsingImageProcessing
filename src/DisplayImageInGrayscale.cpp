/*
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv) {
	Mat im = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);

	if (argc != 2 || !im.data) {
		printf("No image data \n");
		return -1;
	}

	namedWindow("Hello", WINDOW_AUTOSIZE);
	imshow("Hello", im);

	cout << "Press 'q' or ESC to quit..." << endl;
	int key;
	while (1) {
		if (char(waitKey(1)) == 'q')
			break;
	}
	destroyAllWindows();
	cout << "Got here" << endl;
	return 0;
}
*/
