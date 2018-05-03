#pragma once

#ifndef BlackPawn_h
#define BlackPawn_h

#include <stdio.h>
#include "stdafx.h"
#include "common.h"
#include "Piece.h"

namespace cv {

	class BlackPawn : public Piece
	{

	public:
		BlackPawn();
		BlackPawn(String path, String name);
	};
}

#endif
