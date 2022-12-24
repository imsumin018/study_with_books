/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include <cstring>
#include "Date.h"

Date::Date(const char *sName, int sy, int sm, int sd)  //생성자
{
	std::cout<<"생성자 호출!!\n";
	dName = new char[std::strlen(sName)+1];
	std::strcpy(dName, sName);
	year = sy;
	month = sm;
	day = sd;
}

Date::~Date()  //소멸자
{
	std::cout<<"소멸자 호출!!\n";
	delete[] dName;
}

void Date::GetDate()
{
	std::cout<<dName<<"은 "<<year<<"년"<<month<<"월"<<day<<"일 입니다.\n";
}
