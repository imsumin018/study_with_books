/*
 * move.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "move.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::ShowMove() const
{
	std::cout<<"(x, y) = ("<<x<<", "<<y<<")"<<std::endl;
}

Move Move::MoveTo(const Move &m) const
{
	return Move(x+m.x, y+m.y);
}

void Move::MoveTo(double a, double b)
{
	x = a;
	y = b;
}


