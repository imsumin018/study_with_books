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

//���� ������ x�� ��ġ�� ��ȯ�ϴ� �Լ�
int BaseShape::x() {
	return m_X;
}

//���� ������ x�� ��ġ�� �����ϴ� �Լ�
void BaseShape::setX(int x) {
	m_X = x;
}

//���� ������ y�� ��ġ�� ��ȯ�ϴ� �Լ�
int BaseShape::y() {
	return m_Y;
}

//���� ������ y�� ��ġ�� �����ϴ� �Լ�
void BaseShape::setY(int y) {
	m_Y = y;
}

//���� ������ ����� ��ȯ�ϴ� �Լ�
int BaseShape::shape() {
	return m_ShapeType;
}

//���� ������ ���� ��ȯ�ϴ� �Լ�
int BaseShape::width() {
	return m_Width;
}

//���� ������ ���� �����ϴ� �Լ�
void BaseShape::setWidth(int width) {
	m_Width = width;
}

//���� ������ ���̸� ��ȯ�ϴ� �Լ�
int BaseShape::height() {
	return m_Height;
}

//���� ������ ���̸� �����ϴ� �Լ�
void BaseShape::setHeight(int height) {
	m_Height = height;
}

//���� ������ ��ġ�� ����ϴ� �Լ�
void BaseShape::printPosition() {
	cout<<"Position : "<<" x : "<<m_X<<" / y :" <<m_Y<<endl;
}

//���� ������ ũ�⸦ ����ϴ� �Լ�
void BaseShape::printSize() {
	cout<<"Size : " << "Width : " << m_Width<< " / height : " <<m_Height <<endl;
}

//���� ������ ����� ����ϴ� �Լ�
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
