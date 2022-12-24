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
	BaseShape *pBaseShape;
	CircleShape circleShape(BaseShape::SHAPE_CIRCLE);
	circleShape.setRadius(12);
	circleShape.getArea();
	cout<<endl;

	pBaseShape = &circleShape;
	pBaseShape->getArea();

	return 0;
}


