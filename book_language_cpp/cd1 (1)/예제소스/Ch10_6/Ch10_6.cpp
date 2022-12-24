/*
 * Ch10_6.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class MyNum {

private:
	int num;

public:
	MyNum() {
		num=0;
	}

	MyNum(int num) :
		num(num) {

	}

	friend int operator +(MyNum &n1, MyNum &n2) {
		return n1.num + n2.num;
	}

	friend bool operator <(MyNum &n1, MyNum &n2) {
		return (n1.num < n2.num) ? true : false;
	}

	friend int operator /(MyNum &n1, int n) {
		n1.num = n1.num / n;
		return n1.num;
	}

	friend int operator +=(MyNum &n1, MyNum &n2) {
		n1.num = n1.num + n2.num;
		return n1.num;
	}

	friend ostream& operator <<(ostream &out, const MyNum &n) {
		out << "num:" <<n.num;
		return out;
	}
};


template<typename Type, int size>
class Calc_template {

private:
	Type data[size];

public:
	Type sum() {
		Type total = 0;

		for(int i=0; i<size; i++) {
			total += data[i];
		}

		return total;
	}

	Type max() {
		Type big = data[0];

		for(int i=1; i<size; i++) {

			if(big < data[i]) {
				big = data[i];
			}

		}

		return big;
	}

	double avg() {
		Type total = sum();
		return total / size;
	}

	Type& operator[](int idx) {
		return data[idx];
	}
};

int main() {

	int i;

	Calc_template<int, 3> a;
	for(int i=0; i<3; i++) {
		a[i] = i+1;
	}

	int a_sum = a.sum();
	int a_max = a.max();
	double a_avg = a.avg();

	cout<<"a_sum:"<<a_sum<<"\na_max:"<<a_max<<"\na_avg:"<<a_avg<<endl;

	Calc_template<double, 4> b;
	for(i=0; i<4; i++) {
		b[i] = 1.2 * (i+1);
	}

	double b_sum = b.sum();
	double b_max = b.max();
	double b_avg = b.avg();

	cout<<"b_sum:" << b_sum <<"n\b_max:"<<b_max<<"\nb_avg:"<<b_avg<<endl;

	Calc_template<MyNum, 2> c;
	for(i=0; i<2; i++) {
		c[i] = MyNum(i+1);
	}

	MyNum c_sum = c.sum();
	MyNum c_max = c.max();
	MyNum c_avg = c.avg();

	cout<<"c_sum:"<<c_sum<<"\nc_max:"<<c_max<<"\nc_avg:"<<c_avg<<endl;

}
