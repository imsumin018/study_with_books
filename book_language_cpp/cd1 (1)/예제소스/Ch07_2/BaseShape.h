/*
 * BaseShape.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef BASESHAPE_H_
#define BASESHAPE_H_

class BaseShape {

private:
	int m_X, m_Y; //���� ������ ��ġ(x, y)�� ���� ��� ����
	int m_Width, m_Height; //���� ������ ũ��(width, height)�� ���� ��� ����

protected:
	int m_ShapeType;  //���� ������ ����� ���� ����

public:
	//�������� ����� �����ϱ� ���� ������(Enum)
	enum ShapeTape {
		SHAPE_BASE, SHAPE_CIRCLE, SHAPE_RECTANGLE, SHAPE_TRIANGLE
	};

	BaseShape(int shapeType = SHAPE_BASE); //BaseShape Ŭ������ ������

	int x();  //���� ������ x�� ��ġ�� ��ȯ�ϴ� �޼ҵ�
	int y();  //���� ������ y�� ��ġ�� ��ȯ�ϴ� �޼ҵ�
	int width();  //���� ������ ���� ũ�⸦ ��ȯ�ϴ� �޼ҵ�
	int height(); //���� ������ ���̸� ��ȯ�ϴ� �޼ҵ�
	int shape();  //���� ������ ����� ��ȯ�ϴ� �޼ҵ�
	void setX(int x);  //���� ������ x�� ��ġ�� �����ϴ� �޼ҵ�
	void setY(int y);  //���� ������ y�� ��ġ�� �����ϴ� �޼ҵ�
	void setWidth(int width);   //���� ������ ���� ũ�⸦ �����ϴ� �޼ҵ�
	void setHeight(int height); //���� ������ ���̸� �����ϴ� �޼ҵ�
	void printPosition();  //���� ������ ��ġ�� ����ϴ� �޼ҵ�
	void printSize();  //���� ������ ũ�⸦ ����ϴ� �޼ҵ�
	void printShape();  //���� ������ ����� ����ϴ� �޼ҵ�
};

#endif /* BASESHAPE_H_ */
