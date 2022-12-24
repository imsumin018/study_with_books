/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include "BaseShape.h"

int main() {
	BaseShape baseShape;
	baseShape.setX(10);
	baseShape.setY(20);
	baseShape.printPosition();

	return 0;
}
