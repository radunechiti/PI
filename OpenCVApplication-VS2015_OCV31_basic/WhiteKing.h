#pragma once

#ifndef WhiteKing_h
#define WhiteKing_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"
namespace cv {

	class WhiteKing : public Piece
	{
	public:
		WhiteKing(String path, String name);
		WhiteKing();
	};
}

#endif
