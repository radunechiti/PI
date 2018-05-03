#include "stdafx.h"
#include "WhiteKnight.h"

namespace cv {
	WhiteKnight::WhiteKnight() {}
	WhiteKnight::WhiteKnight(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}