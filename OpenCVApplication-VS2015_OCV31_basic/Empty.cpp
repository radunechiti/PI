#include "stdafx.h"
#include "Empty.h"

namespace cv {
	Empty::Empty(){}
	Empty::Empty(String name)
	{
		this->source = Mat(60, 60, CV_8UC3);
		this->name = name;
	}


}