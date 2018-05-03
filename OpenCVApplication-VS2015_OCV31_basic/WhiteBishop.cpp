#include "stdafx.h"
#include "WhiteBishop.h"

namespace cv {
	WhiteBishop::WhiteBishop() {}
	WhiteBishop::WhiteBishop(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}
}