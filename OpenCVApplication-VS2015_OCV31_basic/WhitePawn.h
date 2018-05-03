#pragma once
#pragma once

#ifndef WhitePawn_h
#define WhitePawn_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class WhitePawn : public Piece
	{
	public:
		WhitePawn(String path, String name);
		WhitePawn();
	};
}

#endif

