#include <opencv2/opencv.hpp>

#ifdef _DEBUG
#pragma comment(lib, "opencv_world410d.lib")
#else
#pragma comment(lib, "opencv_world410.lib")
#endif // DEBUG


int main(int argc, char** argv) 
{
	cv::Mat img = cv::imread(argv[1], -1);
	if (img.empty()) return -1;

	cv::namedWindow("image", cv::WINDOW_AUTOSIZE);
	cv::imshow("image", img);

	cv::waitKey(0);
	cv::destroyWindow("image");

	return 0;
}