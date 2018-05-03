#pragma once

#pragma once

#ifndef Piece_h
#define Piece_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"

namespace cv {

	class Piece
	{
	public:
		Piece(String path, String name);
		Piece();
		cv::Mat getSource();
		cv::String getName();
	protected:
		Mat source;
		String name;
	};
}

#endif


