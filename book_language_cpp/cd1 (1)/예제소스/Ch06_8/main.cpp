/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "timer.h"
using namespace std;

int main() {
	Timer studyingToday;
	Timer studyingEng(1, 50);
	Timer studyingMath(2, 30);

	studyingToday = studyingEng.Total(studyingMath);
	cout<< "Today's timer : ";
	studyingToday.GetTotalTime();

	return 0;
}
