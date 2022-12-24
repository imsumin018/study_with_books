/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "CircleShape.h"
using namespace std;

int main() {
	CircleShape circleShape(BaseShape::SHAPE_CIRCLE);
	circleShape.setRadius(12);
	circleShape.setColor(BaseColor::COLOR_RED);

	circleShape.getArea();
	circleShape.printColor();

	return 0;
}


