#ifndef F_CPU
#define F_CPU 12000000UL
#endif

#include <stdio.h>
#include <math.h>
#include "dynamixel.h"
#include "legs.h"
#include "moves.h"
#include "util/delay.h"

int abs (int x) {
	return x < 0 ? -x : x;
}

int min (int a, int b) {
	return a > b ? b : a;
}

int max (int a, int b) {
	return a > b ? a : b;
}

Leg leg[7];

void initializeLegs () {
	assignLegs(leg);
}

void rotate (int id, int lvl, double angle) {
	int ax;
	if (lvl == 1)
		ax = leg[id].high;
	else
	if (lvl == 2)
		ax = leg[id].mid;
	else
		ax = leg[id].low;
	
	int goalPos = (int)(angle * 512. / 150.);
	if (goalPos > 0)
		goalPos = 512 - goalPos;
	else
		goalPos = 512 + abs(goalPos);
	goalPos = max(0, min(1023, goalPos));
	dxl_write_word(ax, P_GOAL_POSITION_L, goalPos);
}

void go(int k) {
	_delay_ms(changeTime);
	stay();
	_delay_ms(changeTime);
	raise1();
	_delay_ms(changeTime);
	move1(k);
	_delay_ms(changeTime);
	lower1();
	_delay_ms(changeTime);
	raise2();
	_delay_ms(changeTime);
	move2();
	_delay_ms(changeTime);
	lower2();
}

void turn (int k) {
	int coef = 3;
	for(int cnt = 0; cnt < 3; cnt++) {
		raise1();
		_delay_ms(coef*changeTime);
		rotate(6, 1, h + k*ANG);
		rotate(4, 1, -h + k*ANG);
		rotate(2, 1, 0 + k*ANG);
		_delay_ms(coef*changeTime);
		lower1();
		_delay_ms(coef*changeTime);
		raise2();
		_delay_ms(coef*changeTime);
		rotate(6, 1, h);
		rotate(4, 1, -h);
		rotate(2, 1, 0);
	
		rotate(1, 1, h + k*ANG);
		rotate(3, 1, -h + k*ANG);
		rotate(5, 1, 0 + k*ANG);
		_delay_ms(coef*changeTime);
		lower2();
		_delay_ms(coef*changeTime);
		stay();
		_delay_ms(coef*changeTime);
	}
}

void rotateDelta (int id, int lvl, double d_angle) {
	int ax;
	if (lvl == 1)
		ax = leg[id].high;
	else
	if (lvl == 2)
		ax = leg[id].mid;
	else
		ax = leg[id].low;
		
	int curP = 512 - dxl_read_word (ax, P_PRESENT_POSITION_L);
	double curPos = curP * 150./512.;
	int goalPos = (int)((curPos + d_angle) * 512. / 150.);
	if (goalPos > 0)
		goalPos = 512 - goalPos;
	else
		goalPos = 512 + abs(goalPos);
	goalPos = max(0, min(1023, goalPos));
	printf("curPos = %d, goalPos = %d\n", curP, goalPos);
	dxl_write_word(ax, P_GOAL_POSITION_L, goalPos);
}

int get_angle (int id, int lvl) {
	int n;
	if (lvl == 1)
		n = leg[id].high;
	else
	if (lvl == 2)
		n = leg[id].mid;
	else
		n = leg[id].low;
	int pos = dxl_read_word(n, P_PRESENT_POSITION_L);
	double res = (512 - pos) * 150. / 512.;
	return (int)(res * 100);
}

void stay () {			
	rotate(1, 1, h);rotate(1, 2, m);rotate(1, 3, l);
	rotate(2, 1, 0);rotate(2, 2, m);rotate(2, 3, l);
	rotate(3, 1, -h);rotate(3, 2, -m);rotate(3, 3, -l);
	rotate(4, 1, -h);rotate(4, 2, -m);rotate(4, 3, -l);
	rotate(5, 1, 0);rotate(5, 2, -m);rotate(5, 3, -l);
	rotate(6, 1, h);rotate(6, 2, m);rotate(6, 3, l);
}

void raise1 () {		
	rotate(3, 2, -m - dRaise);rotate(3, 3, -l + dRaise);
	rotate(5, 2, -m - dRaise);rotate(5, 3, -l + dRaise);
	rotate(1, 2, m + dRaise);rotate(1, 3, l - dRaise);
}

void move1 (int k) {
	rotate(1, 1, h + k*dMove);
	rotate(3, 1, -h + k*dMove);
	rotate(5, 1, 0 - k*dMove);
	rotate(2, 1, 0 - k*dMove);
	rotate(4, 1, -h + k*dMove);
	rotate(6, 1, h + k*dMove);
}
void lower1 () {
	rotate(1, 2, m);rotate(1, 3, l);
	rotate(3, 2, -m);rotate(3, 3, -l);
	rotate(5, 2, -m);rotate(5, 3, -l);
}

void raise2 () {
	rotate(4, 2, -m - dRaise);rotate(4, 3, -l + dRaise);
	rotate(2, 2, m + dRaise);rotate(2, 3, l - dRaise);
	rotate(6, 2, m + dRaise);rotate(6, 3, l - dRaise);
}

void move2 () {
	rotate(1, 1, h);
	rotate(3, 1, -h);
	rotate(5, 1, 0);
	rotate(2, 1, 0);
	rotate(4, 1, -h);
	rotate(6, 1, h);
}

void lower2 () {
	rotate(4, 2, -m);rotate(4, 3, -l);
	rotate(2, 2, m);rotate(2, 3, l);
	rotate(6, 2, m);rotate(6, 3, l);
}