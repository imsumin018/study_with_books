/*
 * const.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef STATIC_H_
#define STATIC_H_

class StaticClass {
private:
	int a=10;
	int b=20;
	static int c;

public:
	int getA();
	int* getB();
	void printA();
	void printB();
	void increaseC();
	void printC();
};


#endif /* STATIC_H_ */
