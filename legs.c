/*
 * legs.c
 *
 * Created: 08.06.2013 21:59:22
 *  Author: abz
 */ 

#include "legs.h"

Leg newLeg (int a, int b, int c) {
	Leg res;
	res.high = a, res.mid = b, res.low = c;
	return res;
}

void assignLegs (Leg leg[]) {
	leg[1] = newLeg(14, 16, 18);
	leg[2] = newLeg(8, 10, 12);
	leg[3] = newLeg(2, 4, 6);
	leg[4] = newLeg(13, 15, 17);
	leg[5] = newLeg(7, 9, 11);
	leg[6] = newLeg(1, 3, 5);
}