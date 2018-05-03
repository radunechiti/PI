#include "stdafx.h"
#include "WhiteQueen.h"

namespace cv {
	WhiteQueen::WhiteQueen() {}
	WhiteQueen::WhiteQueen(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}