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
	cout<<"������ "<<year<<"�� "<<month<<"�� "<<day<<"�� �Դϴ�.\n"<<endl;
}

