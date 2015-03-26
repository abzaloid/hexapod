/*
 * moves.h
 *
 * Created: 08.06.2013 21:47:30
 *  Author: abz
 */ 


#ifndef MOVES_H_
#define MOVES_H_

#define P_GOAL_POSITION_L		30
#define P_GOAL_POSITION_H		31
#define P_GOAL_SPEED_L			32
#define P_GOAL_SPEED_H			33
#define P_GOAL_TORQUE_L			34
#define P_GOAL_TORQUE_H			35
#define P_PRESENT_POSITION_L	36
#define P_PRESENT_POSITION_H	37
#define P_MOVING				46

			
#define dRaise (15.)
#define ANG (22.2)
#define RIGHT (-1)
#define LEFT (1)
#define FORWARD (1)
#define BACKWARD (-1)
#define dMove (10.)
#define changeTime (30)
#define h (70.)
#define m (40.)
#define l (30.)
void rotate (int, int, double);
void rotateDelta (int, int, double);
void initializeLegs ();
void stay ();
void raise1 ();
void move1 (int);
void lower1 ();
void raise2 ();
void move2 ();
void lower2 ();
int get_angle (int, int);
void go(int);
void turn (int);
#endif /* MOVES_H_ */