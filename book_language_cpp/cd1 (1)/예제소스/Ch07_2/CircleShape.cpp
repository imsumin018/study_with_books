/*
 * CircleShape.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "circleShape.h"

using namespace std;

CircleShape::CircleShape(int shapeType) {
	m_ShapeType = shapeType;
}

//���� ����ϴ� �޼ҵ� : �����ϰ� ���� �׸��� ���ؼ� ������ O�� ���
void CircleShape::drawCircle() {
	//���� �׸���
	cout<<"O"<<endl;
}
