/*
 * BaseShape.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

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

	int x();  //���� ������ x�� ��ġ�� ��ȯ�ϴ� �Լ�
	int y();  //���� ������ y�� ��ġ�� ��ȯ�ϴ� �Լ�
	int width();  //���� ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ�
	int height(); //���� ������ ���̸� ��ȯ�ϴ� �Լ�
	int shape();  //���� ������ ����� ��ȯ�ϴ� �Լ�
	void setX(int x);  //���� ������ x�� ��ġ�� �����ϴ� �Լ�
	void setY(int y);  //���� ������ y�� ��ġ�� �����ϴ� �Լ�
	void setWidth(int width);   //���� ������ ���� ũ�⸦ �����ϴ� �Լ�
	void setHeight(int height); //���� ������ ���̸� �����ϴ� �Լ�
	void printPosition();  //���� ������ ��ġ�� ����ϴ� �Լ�
	void printSize();  //���� ������ ũ�⸦ ����ϴ� �Լ�
	void printShape();  //���� ������ ����� ����ϴ� �Լ�

	float getArea();  //���� ������ ���̸� ���ϴ� �Լ�
};
