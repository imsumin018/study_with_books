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
	circleShape.printShape();
	circleShape.drawCircle();
	cout<<circleShape.shape()<<endl;

	return 0;
}


