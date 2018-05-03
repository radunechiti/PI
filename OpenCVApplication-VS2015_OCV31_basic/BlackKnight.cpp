#include "stdafx.h"
#include "BlackKnight.h"

namespace cv {
	BlackKnight::BlackKnight() {}
	BlackKnight::BlackKnight(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}