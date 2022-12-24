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
	int m_X, m_Y; //현재 도형의 위치(x, y)를 위한 멤버 변수
	int m_Width, m_Height; //현재 도형의 크기(width, height)를 위한 멤버 변수

protected:
	int m_ShapeType;  //현재 도형의 모양을 위한 변수

public:
	//도형들의 모양을 구분하기 위한 열거형(Enum)
	enum ShapeTape {
		SHAPE_BASE, SHAPE_CIRCLE, SHAPE_RECTANGLE, SHAPE_TRIANGLE
	};

	BaseShape(int shapeType = SHAPE_BASE); //BaseShape 클래스의 생성자

	int x();  //현재 도형의 x의 위치를 반환하는 메소드
	int y();  //현재 도형의 y의 위치를 반환하는 메소드
	int width();  //현재 도형의 폭의 크기를 반환하는 메소드
	int height(); //현재 도형의 높이를 반환하는 메소드
	int shape();  //현재 도형의 모양을 반환하는 메소드
	void setX(int x);  //현재 도형의 x의 위치를 설정하는 메소드
	void setY(int y);  //현재 도형의 y의 위치를 설정하는 메소드
	void setWidth(int width);   //현재 도형의 폭의 크기를 설정하는 메소드
	void setHeight(int height); //현재 도형의 높이를 설정하는 메소드
	void printPosition();  //현재 도형의 위치를 출력하는 메소드
	void printSize();  //현재 도형의 크기를 출력하는 메소드
	void printShape();  //현재 도형의 모양을 출력하는 메소드
};

#endif /* BASESHAPE_H_ */
