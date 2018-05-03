#pragma once

#ifndef BlackKnight_h
#define BlackKnight_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class BlackKnight : public Piece
	{
	public:
		BlackKnight(String path, String name);
		BlackKnight();
		//cv::Mat getSource();
	//private:
		//Mat source;
	};
}

#endif

