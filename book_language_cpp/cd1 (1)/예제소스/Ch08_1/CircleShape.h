/*
 * CircleShape.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef CIRCLESHAPE_H_
#define CIRCLESHAPE_H_

#include "BaseShape.h"

class CircleShape : public BaseShape {
private:
	int m_Radius;

public:
	CircleShape(int shapeType);

	//원을 출력하는 메소드
	void drawCircle();

	void setRadius(int radius);

	float getArea();
};

#endif /* CIRCLESHAPE_H_ */
