#pragma once

#ifndef BlackBishop_h
#define BlackBishop_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class BlackBishop : public Piece
	{
	public:
		BlackBishop(String path, String name);
		BlackBishop();
		//cv::Mat getSource();
	////private:
		//Mat source;
	};
}

#endif

