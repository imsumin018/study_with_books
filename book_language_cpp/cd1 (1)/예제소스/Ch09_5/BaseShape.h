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
	int m_X, m_Y;

public:
	BaseShape();
	BaseShape(int x, int y);

	friend std::ostream &operator<<(std::ostream &stream, BaseShape ob);
};


#endif /* BASESHAPE_H_ */
