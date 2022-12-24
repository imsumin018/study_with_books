/*
 * Ch06_2.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class Position {
	friend class Color;
private:
	int cx, cy, cr;
public:
	Position(int m_x, int m_y, int m_r) {
		cx=m_x;
		cy=m_y;
		cr=m_r;
	}
};

class Color {
private:
	int r, g, b;
public:
	Color(int m_r, int m_g, int m_b) {
		r=m_r;
		g=m_g;
		b=m_b;
	}
	void GetInfo(Position &p);
};

void Color::GetInfo(Position &p) {
	cout<<"RGB:: "<<r<<","<<g<<","<<b<<endl;
	cout<<"Position:: "<<p.cx<<","<<p.cy<<","<<p.cr<<endl;
}

int main() {
	Color C(255, 255, 255);
	Position P(100, 100, 10);
	C.GetInfo(P);

	return 0;
}
