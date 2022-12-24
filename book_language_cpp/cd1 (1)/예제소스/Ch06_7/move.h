/*
 * move.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef MOVE_H_
#define MOVE_H_

class Move {
private:
	double x;
	double y;
	char *Name;
public:
	Move(double a=0, double b=0);
	void ShowMove() const;  //��� ��� ����
	Move MoveTo(const Move &m) const;  //��� ��� ����
	void MoveTo(double a=0, double b=0);
};


#endif /* MOVE_H_ */
