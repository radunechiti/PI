#include "stdafx.h"
#include "WhitePawn.h"

namespace cv {
	WhitePawn::WhitePawn() {}
	WhitePawn::WhitePawn(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}