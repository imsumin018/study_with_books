/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */
#include "Date.h"

void Date::SetDate(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}

void Date::GetDate()
{
	cout<<"오늘은 "<<year<<"년 "<<month<<"월 "<<day<<"일 입니다.\n"<<endl;
}

