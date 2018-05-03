#include "stdafx.h"
#include "BlackRook.h"

namespace cv {
	BlackRook::BlackRook() {}
	BlackRook::BlackRook(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}