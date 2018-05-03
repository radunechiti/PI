#pragma once

#ifndef BlackKing_h
#define BlackKing_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class BlackKing : public Piece
	{
	public:
		BlackKing(String path, String name);
		BlackKing();
		//cv::Mat getSource();
	//private:
		//Mat source;
	};
}

#endif

