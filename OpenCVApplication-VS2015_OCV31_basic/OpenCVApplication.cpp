// OpenCVApplication.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
#include "BlackPawn.h"
#include "BlackQueen.h"
#include "BlackKing.h"
#include "BlackKnight.h"
#include "BlackRook.h"
#include "BlackBishop.h"

#include "WhitePawn.h"
#include "WhiteQueen.h"
#include "WhiteKing.h"
#include "WhiteKnight.h"
#include "WhiteRook.h"
#include "WhiteBishop.h"

#include "Piece.h"

#include "Empty.h"

#include <algorithm>    // std::random_shuffle
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

#define BLACK 0

cv::BlackPawn blackPawn;
cv::BlackQueen blackQueen;
cv::BlackKing blackKing;
cv::BlackKnight blackKnight;
cv::BlackRook blackRook;
cv::BlackBishop blackBishop;

cv::WhitePawn whitePawn;
cv::WhiteQueen whiteQueen;
cv::WhiteKing whiteKing;
cv::WhiteKnight whiteKnight;
cv::WhiteRook whiteRook;
cv::WhiteBishop whiteBishop;

cv::Empty empty;

std::vector<Piece> list,unique;

Mat table;

void initPieces()
{
	blackPawn = cv::BlackPawn("Images/BlackPawn.png","BlackPawn");
	blackKnight = cv::BlackKnight("Images/BlackKnight.png", "BlackKnight");
	blackBishop = cv::BlackBishop("Images/BlackBishop.png", "BlackBishop");
	blackQueen = cv::BlackQueen("Images/BlackQueen.png", "BlackQueen");
	blackKing = cv::BlackKing("Images/BlackKing.png", "BlackKing");
	blackRook = cv::BlackRook("Images/BlackRook.png", "BlackRook");

	whitePawn = cv::WhitePawn("Images/WhitePawn.png","WhitePawn");
	whiteKnight = cv::WhiteKnight("Images/WhiteKnight.png","WhiteKnight");
	whiteBishop = cv::WhiteBishop("Images/WhiteBishop.png","WhiteBishop");
	whiteQueen = cv::WhiteQueen("Images/WhiteQueen.png","WhiteQueen");
	whiteKing = cv::WhiteKing("Images/WhiteKing.png","WhiteKing");
	whiteRook = cv::WhiteRook("Images/WhiteRook.png","WhiteRook");

	empty = cv::Empty("Empty");

	table = Mat(520, 520, CV_8UC3);
	for (int i = 0; i < table.rows; i++)
		for (int j = 0; j < table.cols*3; j++)
			table.at<uchar>(i, j) = BLACK;	
}
void createTable()
{
	for(int i=5; i<table.rows; i+=65)
		for (int j=5; j<table.cols*3; j+=65*3)
		{
			Piece acolo = list.back();
			list.pop_back();
			Mat s = acolo.getSource();
			for (int ii = 0; ii < s.rows; ii++)
				for (int jj = 0; jj < s.cols * 3; jj++)
					table.at<uchar>(i + ii, j + jj) = s.at<uchar>(ii, jj);
		}

	imshow("tabkjjle", table);
	waitKey();
}
void initVector()
{
	for(int i=0; i<32; i++)
		list.push_back(empty);

	for (int i=0; i<8; i++)
	{
		list.push_back(blackPawn);
		list.push_back(whitePawn);
	}

	for (int i=0; i<2; i++)
	{
		list.push_back(blackBishop);
		list.push_back(whiteBishop);
		list.push_back(blackKnight);
		list.push_back(whiteKnight);
		list.push_back(blackRook);
		list.push_back(whiteRook);
	}

	list.push_back(whiteQueen);
	list.push_back(whiteKing);
	list.push_back(blackQueen);
	list.push_back(blackKing);

	unique.push_back(blackKing);
	unique.push_back(blackQueen);
	unique.push_back(whiteKing);
	unique.push_back(whiteQueen);
	unique.push_back(blackBishop);
	unique.push_back(blackKnight);
	unique.push_back(blackRook);
	unique.push_back(whiteBishop);
	unique.push_back(whiteKnight);
	unique.push_back(whiteRook);
	unique.push_back(blackPawn);
	unique.push_back(whitePawn);
	unique.push_back(empty);
}
int myrandom(int i) { return std::rand() % i; }
void shuffle()
{
	std::random_shuffle(list.begin(), list.end(), myrandom);
}
void processing()
{
	for (int i = 5; i < table.rows; i += 65)
	{
		for (int j = 5; j < table.cols * 3; j += 65 * 3)
		{
			for (std::vector<Piece>::iterator it = unique.begin(); it != unique.end(); ++it)
			{
				Piece piesa = *it;
				Mat src = piesa.getSource();
				bool ok = true;
				for (int ii = 0; ii < src.rows && ok; ii++)
					for (int jj = 0; jj < src.cols * 3 && ok; jj++)
						if (table.at<uchar>(i + ii, j + jj) != src.at<uchar>(ii, jj))
							ok = false;
				if (ok)
					//printf("%s\t", piesa.getName());
					printf("da");
				else
					printf("nu");
			}
		}
		printf("\n");
	}
}
int main()
{
	std::srand(unsigned(std::time(0)));
	initPieces();
	initVector();
	shuffle();
	createTable();
	processing();

	return 0;
}