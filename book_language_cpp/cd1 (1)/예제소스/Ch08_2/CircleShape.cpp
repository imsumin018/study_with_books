/*
 * CircleShape.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include <math.h>
#include "circleShape.h"

using namespace std;

CircleShape::CircleShape(int shapeType) {
	m_ShapeType = shapeType;
}

void CircleShape::setRadius(int radius)
{
	m_Radius = radius;
}

float CircleShape::getArea()
{
	cout<<"Circle's Area : "<<M_PI * pow(m_Radius, 2) <<endl;
	return M_PI * pow(m_Radius, 2);
}

//원을 출력하는 메소드 : 간단하게 원을 그리기 위해서 영문자 O를 출력
void CircleShape::drawCircle() {
	//원을 그린다
	cout<<"O"<<endl;
}
