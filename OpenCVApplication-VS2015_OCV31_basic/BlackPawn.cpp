#include "stdafx.h"
#include "BlackPawn.h"

namespace cv {
	BlackPawn::BlackPawn(){}
	BlackPawn::BlackPawn(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}

}