/*
 * BaseColor.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "BaseColor.h"
using namespace std;

BaseColor::BaseColor() : m_Color(BaseColor::COLOR_BASE)
{

}

int BaseColor::color()
{
	return m_Color;
}

void BaseColor::setColor(int color)
{
	m_Color = color;
}

void BaseColor::printColor()
{
	switch(m_Color) {
	case COLOR_BASE:
		cout<<"Base Color"<<endl;
		break;

	case COLOR_RED:
		cout<<"Red Color"<<endl;
		break;

	case COLOR_GREEN:
		cout<<"Green Color"<<endl;
		break;

	case COLOR_BLUE:
		cout<<"Blue Color" <<endl;
		break;
	}
}


