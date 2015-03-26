/*
 * legs.h
 *
 * Created: 08.06.2013 21:59:02
 *  Author: abz
 */ 


#ifndef LEGS_H_
#define LEGS_H_

typedef struct {
	int low, mid, high;
} Leg;

Leg newLeg (int, int, int);

void assignLegs (Leg []);

#endif /* LEGS_H_ */