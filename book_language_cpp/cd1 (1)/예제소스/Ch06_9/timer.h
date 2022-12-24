/*
 * timer.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef TIMER_H_
#define TIMER_H_

class Timer {
private:
	int hour;
	int minute;
public:
	Timer();
	Timer(int h, int m);
	void Reset(int h, int m);
	Timer operator+(const Timer &t) const; //공부 시간 합산
	void GetTotalTime() const;
};

#endif /* TIMER_H_ */
