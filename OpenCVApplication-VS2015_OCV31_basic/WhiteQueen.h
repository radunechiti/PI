#pragma once
#pragma once

#ifndef WhiteQueen_h
#define WhiteQueen_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class WhiteQueen : public Piece
	{
	public:
		WhiteQueen(String path, String name);
		WhiteQueen();
	};
}

#endif

