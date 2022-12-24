/*
 * BaseShape.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "BaseShape.h"
using namespace std;

//BaseShape�� ������
BaseShape::BaseShape(int shapeType) {
	m_ShapeType = shapeType;  //�Ѱܹ��� �μ��� �̿��ؼ� ������ ����� ����
}

//���� ������ x�� ��ġ�� ��ȯ�ϴ� �޼ҵ�
int BaseShape::x() {
	return m_X;
}

//���� ������ x�� ��ġ�� �����ϴ� �޼ҵ�
void BaseShape::setX(int x) {
	m_X = x;
}

//���� ������ y�� ��ġ�� ��ȯ�ϴ� �޼ҵ�
int BaseShape::y() {
	return m_Y;
}

//���� ������ y�� ��ġ�� �����ϴ� �޼ҵ�
void BaseShape::setY(int y) {
	m_Y = y;
}

//���� ������ ����� ��ȯ�ϴ� �޼ҵ�
int BaseShape::shape() {
	return m_ShapeType;
}

//���� ������ ���� ��ȯ�ϴ� �޼ҵ�
int BaseShape::width() {
	return m_Width;
}

//���� ������ ���� �����ϴ� �޼ҵ�
void BaseShape::setWidth(int width) {
	m_Width = width;
}

//���� ������ ���̸� ��ȯ�ϴ� �޼ҵ�
int BaseShape::height() {
	return m_Height;
}

//���� ������ ���̸� �����ϴ� �޼ҵ�
void BaseShape::setHeight(int height) {
	m_Height = height;
}

//���� ������ ��ġ�� ����ϴ� ���޼ҵ�
void BaseShape::printPosition() {
	cout<<"Position : "<<" x : "<<m_X<<" / y :" <<m_Y<<endl;
}

//���� ������ ũ�⸦ ����ϴ� �޼ҵ�
void BaseShape::printSize() {
	cout<<"Size : " << "Width : " << m_Width<< " / height : " <<m_Height <<endl;
}

//���� ������ ����� ����ϴ� �޼ҵ�
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
