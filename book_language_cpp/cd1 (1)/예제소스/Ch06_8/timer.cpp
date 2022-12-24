/*
 * timer.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "timer.h"

Timer::Timer()
{
	hour = minute = 0;
}

Timer::Timer(int h, int m)
{
	hour = h;
	minute = m;
}

void Timer::Reset(int h, int m)
{
	hour = h;
	minute = m;
}

Timer Timer::Total(const Timer &t) const
{
	Timer tot;
	tot.minute = minute + t.minute;
	tot.hour = hour + t.hour + tot.minute / 60;
	tot.minute %= 60;
	return tot;
}

void Timer::GetTotalTime() const
{
	std::cout<<hour<<"½Ã°£ "<< minute <<"ºÐ";
}
