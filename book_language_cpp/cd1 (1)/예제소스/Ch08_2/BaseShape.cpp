/*
 * BaseShape.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "BaseShape.h"
using namespace std;

//BaseShape의 생성자
BaseShape::BaseShape(int shapeType) {
	m_ShapeType = shapeType;  //넘겨받은 인수를 이용해서 도형의 모양을 설정
}

//현재 도형의 x의 위치를 반환하는 메소드
int BaseShape::x() {
	return m_X;
}

//현재 도형의 x의 위치를 설정하는 메소드
void BaseShape::setX(int x) {
	m_X = x;
}

//현재 도형의 y의 위치를 반환하는 메소드
int BaseShape::y() {
	return m_Y;
}

//현재 도형의 y의 위치를 설정하는 메소드
void BaseShape::setY(int y) {
	m_Y = y;
}

//현재 도형의 모양을 반환하는 메소드
int BaseShape::shape() {
	return m_ShapeType;
}

//현재 도형의 폭을 반환하는 메소드
int BaseShape::width() {
	return m_Width;
}

//현재 도형의 폭을 설정하는 메소드
void BaseShape::setWidth(int width) {
	m_Width = width;
}

//현재 도형의 높이를 반환하는 메소드
int BaseShape::height() {
	return m_Height;
}

//현재 도형의 높이를 설정하는 메소드
void BaseShape::setHeight(int height) {
	m_Height = height;
}

//현재 도형의 위치를 출력하느 ㄴ메소드
void BaseShape::printPosition() {
	cout<<"Position : "<<" x : "<<m_X<<" / y :" <<m_Y<<endl;
}

//현재 도형의 크기를 출력하는 메소드
void BaseShape::printSize() {
	cout<<"Size : " << "Width : " << m_Width<< " / height : " <<m_Height <<endl;
}

//현재 도형의 모양을 출력하는 메소드
void BaseShape::printShape() {
	switch(m_ShapeType) {
	case SHAPE_BASE:
		cout<<"BASE"<<endl; break;
	case SHAPE_CIRCLE:
		cout<<"CIRCLE"<<endl; break;
	case SHAPE_RECTANGLE:
		cout<<"RECTANGLE"<<endl; break;
	case SHAPE_TRIANGLE:
		cout<<"TRIANGLE"<<endl; break;
	}
}

float BaseShape::getArea() {
	cout<<"BaseShape's Area : "<< "0" <<endl;

	return 0;
}
