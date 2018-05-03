#include "stdafx.h"
#include "BlackBishop.h"

namespace cv {
	BlackBishop::BlackBishop() {}
	BlackBishop::BlackBishop(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}
}