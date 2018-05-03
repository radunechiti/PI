#include "stdafx.h"
#include "WhiteRook.h"

namespace cv {
	WhiteRook::WhiteRook() {}
	WhiteRook::WhiteRook(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}