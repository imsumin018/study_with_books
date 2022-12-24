/*
 * const.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef CONST_H_
#define CONST_H_

class ConstClass {
private:
	const int a=1;
	int b;

public:
	int getA();
	int getA() const;
	int* getB();
	void printA() const;
	void printB();
};

#endif /* CONST_H_ */
