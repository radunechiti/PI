#include "stdafx.h"
#include "Piece.h"

namespace cv {
	Piece::Piece() {}
	Piece::Piece(String path, String name)
	{
		this->source = imread(path, CV_LOAD_IMAGE_COLOR);
		this->name = name;
	}
	cv::Mat Piece::getSource()
	{
		return this->source;
	}
	cv::String Piece::getName()
	{
		return this->name;
	}
}