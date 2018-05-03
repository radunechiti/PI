#pragma once
#pragma once

#ifndef WhiteKnight_h
#define WhiteKnight_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class WhiteKnight : public Piece
	{
	public:
		WhiteKnight(String path, String name);
		WhiteKnight();
	};
}

#endif

