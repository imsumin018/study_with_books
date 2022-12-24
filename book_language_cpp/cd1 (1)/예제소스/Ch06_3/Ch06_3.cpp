/*
 * Ch06_3.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class Color;
class Position {
private:
	int cx, cy, cr;  //원의 중심 좌표와 반지름
public:
	Position(int m_x, int m_y, int m_r) {
		cx=m_x;
		cy=m_y;
		cr=m_r;
	}
	void GetInfo(Color &c);
};

class Color {
	friend void Position::GetInfo(Color &c);
private:
	int r, g, b;  //원 내부 색상
public:
	Color(int m_r, int m_g, int m_b) {
		r=m_r;
		g=m_g;
		b=m_b;
	}
};

void Position::GetInfo(Color &c) {
	cout<<"Position:: " <<cx<<","<<cy<<","<<cr<<endl;
	cout<<"RGB:: "<<c.r<<","<<c.g<<","<<c.b<<endl;
}

int main() {
	Position P(100, 100, 10);
	Color C(255, 255, 255);
	P.GetInfo(C);
	return 0;
}
