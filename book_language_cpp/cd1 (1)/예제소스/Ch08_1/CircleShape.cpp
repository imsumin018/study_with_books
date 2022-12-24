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

//���� ����ϴ� �޼ҵ� : �����ϰ� ���� �׸��� ���ؼ� ������ O�� ���
void CircleShape::drawCircle() {
	//���� �׸���
	cout<<"O"<<endl;
}
