#pragma once
#pragma once

#ifndef WhiteRook_h
#define WhiteRook_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class WhiteRook : public Piece
	{
	public:
		WhiteRook(String path, String name);
		WhiteRook();
	};
}

#endif

