/*
 * GccApplication6.c
 *
 * Created: 09.09.2013 14:13:40
 *  Author: abz
 */ 

#ifndef F_CPU
#define F_CPU 12000000UL
#endif

#define DEFAULT_BAUDNUM		1 // 1Mbps


#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <math.h>
#include <util/delay.h>
#include "ik.h"
#include "roboplus.h"
#include "legs.h"
#include "moves.h"
#include "serial.h"
#include "dynamixel.h"

Leg legs[7];

int main(void) {
	
	serial_initialize(57600);
	dxl_initialize(0, DEFAULT_BAUDNUM);
	sei();
		
		
	initializeLegs();
	assignLegs(legs);
		
	dxl_write_word(BROADCAST_ID, P_GOAL_SPEED_L, 700);
	dxl_write_word(BROADCAST_ID, P_GOAL_TORQUE_L, 600);
		
	// stand up
	
	double y_const = 11, x_const = 2.5, z_const = 5, z_raise = -1;
	
	stand_up();	
	_delay_ms(2000);
	
	
	// cycle begins here
	
	// raise 1, 3, 5
	
	get_to_point(1, 0, -y_const, z_raise);
	get_to_point(3, 0, -y_const, z_raise);
	get_to_point(5, 0, y_const, z_raise);
	
	_delay_ms(2000);
	
	// move 1,3,5 forward and 2,4,6 backward
	
	get_to_point(1, x_const, -y_const, z_raise);
	get_to_point(3, x_const, -y_const, z_raise);
	get_to_point(5, x_const, y_const, z_raise);
	
	get_to_point(2, -x_const, -y_const, z_const);
	get_to_point(4, -x_const, y_const, z_const);
	get_to_point(6, -x_const, y_const, z_const);
	
	_delay_ms(2000);
	
	// lower 1,3,5 and raise 2,4,6
	
	
	get_to_point(1, x_const, -y_const, z_const);
	get_to_point(3, x_const, -y_const, z_const);
	get_to_point(5, x_const, y_const, z_const);
	
	get_to_point(2, -x_const, -y_const, z_raise);
	get_to_point(4, -x_const, y_const, z_raise);
	get_to_point(6, -x_const, y_const, z_raise);
	
	_delay_ms(2000);
	
	// move 1,3,5 back and 2,4,6 forward
	
	
	get_to_point(1, 0, -y_const, z_const);
	get_to_point(3, 0, -y_const, z_const);
	get_to_point(5, 0, y_const, z_const);
	
	get_to_point(2, 0, -y_const, z_raise);
	get_to_point(4, 0, y_const, z_raise);
	get_to_point(6, 0, y_const, z_raise);
	
	_delay_ms(2000);
	
	// lower 2,4,6
	
	get_to_point(2, 0, -y_const, z_const);
	get_to_point(4, 0, y_const, z_const);
	get_to_point(6, 0, y_const, z_const);
	
	_delay_ms(2000);
	
	// cycle ends here
	
	// rotation begins here
	
	rotate_x (30);
	_delay_ms(2000);
	rotate_x (-30);
	_delay_ms(2000);
	
	rotate_y (30);
	_delay_ms(2000);
	rotate_y (-30);
	_delay_ms(2000);
		
	rotate_z (30);
	_delay_ms(2000);
	rotate_z (-30);
	_delay_ms(2000);
	
	return 0;
}