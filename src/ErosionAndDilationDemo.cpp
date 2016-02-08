//#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/highgui/highgui.hpp"
//#include "highgui.h"
//#include <stdlib.h>
//#include <stdio.h>
//
//using namespace cv;
//
///// Global variables
//Mat src, erosion_dst, dilation_dst;
//
//int binary_threshold = 0;
//int max_binary_threshold = 0;
//int erosion_elem = 0;
//int erosion_size = 0;
//int dilation_elem = 0;
//int dilation_size = 0;
//int const max_elem = 2;
//int const max_kernel_size = 21;
//
///** Function Headers */
//void Erosion(int, void*);
//
///** @function main */
//int main(int argc, char** argv) {
//	/// Load an image
//	src = imread(argv[1], CV_LOAD_IMAGE_GRAYSCALE);
//
//	if (!src.data) {
//		return -1;
//	}
//
//	/// Create windows
//	namedWindow("Erosion Demo", CV_WINDOW_AUTOSIZE);
//
//	/// Create Binary Trackbar
//	createTrackbar("Binary Threshold","Erosion Demo", &binary_threshold, 255, Erosion);
//
//	/// Create Erosion Trackbar
//	createTrackbar("Element:\n 0: Rect \n 1: Cross \n 2: Ellipse",
//			"Erosion Demo", &erosion_elem, max_elem, Erosion);
//
//	createTrackbar("Kernel size:\n 2n +1", "Erosion Demo", &erosion_size,
//			max_kernel_size, Erosion);
//
//	/// Default start
//	Erosion(0, 0);
//
//	waitKey(0);
//	return 0;
//}
//
///**  @function Erosion  */
//void Erosion(int, void*) {
//
//	src = src > binary_threshold;
//	imshow("Erosion Demo", src);
//
//	int erosion_type;
//	if (erosion_elem == 0) {
//		erosion_type = MORPH_RECT;
//	} else if (erosion_elem == 1) {
//		erosion_type = MORPH_CROSS;
//	} else if (erosion_elem == 2) {
//		erosion_type = MORPH_ELLIPSE;
//	}
//
//	Mat element = getStructuringElement(erosion_type,
//			Size(2 * erosion_size + 1, 2 * erosion_size + 1),
//			Point(erosion_size, erosion_size));
//
//	/// Apply the erosion operation
//	erode(src, erosion_dst, element);
//	imshow("Erosion Demo", erosion_dst);
//}
