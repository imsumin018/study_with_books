/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "move.h"

int main() {
	Move A, B;
	Move C(5, 7);

	A.ShowMove();
	B.ShowMove();
	C.ShowMove();

	A.MoveTo(3,5);
	B.MoveTo(7,6);
	C = A.MoveTo(B);

	A.ShowMove();
	B.ShowMove();
	C.ShowMove();

	return 0;
}
