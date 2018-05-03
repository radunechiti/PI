#pragma once

#pragma once

#ifndef Empty_h
#define Empty_h

#include <stdio.h>
#include "common.h"
#include "Piece.h"

namespace cv {

	class Empty : public Piece
	{
	public:
		Empty(String name);
		Empty();
	};
}

#endif


