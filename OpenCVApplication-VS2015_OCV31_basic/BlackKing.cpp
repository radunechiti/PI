#include "stdafx.h"
#include "BlackKing.h"

namespace cv {
	BlackKing::BlackKing() {}
	BlackKing::BlackKing(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}