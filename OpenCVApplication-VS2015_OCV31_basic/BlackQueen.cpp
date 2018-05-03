#include "stdafx.h"
#include "BlackQueen.h"

namespace cv {
	BlackQueen::BlackQueen() {}
	BlackQueen::BlackQueen(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}


}