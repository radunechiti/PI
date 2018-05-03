#include "stdafx.h"
#include "WhiteKing.h"

namespace cv {
	WhiteKing::WhiteKing() {}
	WhiteKing::WhiteKing(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}