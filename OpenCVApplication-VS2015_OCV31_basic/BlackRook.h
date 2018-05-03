#pragma once

#ifndef BlackRock_h
#define BlackRock_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class BlackRook : public Piece
	{
	public:
		BlackRook(String path, String name);
		BlackRook();

	};
}

#endif

