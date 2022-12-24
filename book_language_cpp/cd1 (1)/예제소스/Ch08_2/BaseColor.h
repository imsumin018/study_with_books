/*
 * BaseColor.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef BASECOLOR_H_
#define BASECOLOR_H_

class BaseColor {
protected:
	int m_Color;

public:
	enum ColorType { COLOR_BASE, COLOR_RED, COLOR_GREEN, COLOR_BLUE};
	BaseColor();
	int color();
	void setColor(int color);
	void printColor();
};



#endif /* BASECOLOR_H_ */
