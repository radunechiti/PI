#pragma once

#ifndef BlackQueen_h
#define BlackQueen_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"
namespace cv {

	class BlackQueen : public Piece
	{
	public:
		BlackQueen(String path, String name);
		BlackQueen();

	};
}

#endif

