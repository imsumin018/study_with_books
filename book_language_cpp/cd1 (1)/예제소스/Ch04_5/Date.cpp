/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include <cstring>
#include "Date.h"

Date::Date(const char *sName, int sy, int sm, int sd)  //������
{
	std::cout<<"������ ȣ��!!\n";
	dName = new char[std::strlen(sName)+1];
	std::strcpy(dName, sName);
	year = sy;
	month = sm;
	day = sd;
}

Date::~Date()  //�Ҹ���
{
	std::cout<<"�Ҹ��� ȣ��!!\n";
	delete[] dName;
}

void Date::GetDate()
{
	std::cout<<dName<<"�� "<<year<<"��"<<month<<"��"<<day<<"�� �Դϴ�.\n";
}
