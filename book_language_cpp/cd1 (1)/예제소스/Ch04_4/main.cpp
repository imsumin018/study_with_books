/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "Date.h"

int main()
{
	Date Today;
	Today.GetDate();

	Date Today1(9999, 12, 31);
	Today.GetDate();

	return 0;
}


