#pragma once
#pragma once

#ifndef WhiteBishop_h
#define WhiteBishop_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class WhiteBishop : public Piece
	{
	public:
		WhiteBishop(String path, String name);
		WhiteBishop();
	};
}

#endif

