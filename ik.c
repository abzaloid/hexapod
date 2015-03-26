/*
 * ik.c
 *
 * Created: 06.09.2013 16:09:20
 *  Author: abz
 */ 
#include <math.h>
#include "moves.h"
#include "legs.h"

#define l1 5
#define l2 8
#define l3 11
#define l2_sqr 64
#define l3_sqr 121
#define PI 3.1415926535897932384626433832795
#define PI_HALF 1.5707963267948966192313216916398
#define R2D (57.295779513082320876798154814105)

struct angles {
	double a, b, c;
};

struct point {
	double x, y, z;
};

struct point last_c[7];

struct angles ik (double x0, double y0, double z0) {
	double alpha, beta, gamma;
	alpha = atan2 (x0, y0);
	double M = sqrt (x0 * x0 + y0 * y0);
	double T_sqr = (M - l1) * (M - l1) + z0 * z0;
	double T = sqrt(T_sqr);
	beta = acos ((l2_sqr + T_sqr - l3_sqr) / (2 * l2 * T)) + acos (z0 / T);
	gamma = acos ((l2_sqr + l3_sqr - T_sqr) / (2 * l2 * l3));
	struct angles res;
	res.a = alpha, res.b = beta, res.c = gamma;
	return res;
}

struct point normalize (struct point P, double theta) {
	double x = P.x, y = P.y, z = P.z;
	struct point res;
	res.z = z;
	res.x = cos (theta) * x - sin (theta) * y;
	res.y = sin (theta) * x + cos (theta) * y;
	return res;
}

struct point set_origin (int id, struct point cur, int k) {
	if (id == 1) cur.x -= k * 8.47826, cur.y -= k * 13;
	if (id == 2) cur.x -= k * 13.5;
	if (id == 3) cur.x -= k * 8.47826, cur.y += k * 13;
	if (id == 4) cur.x += k * 8.47826, cur.y -= k * 13;
	if (id == 5) cur.x += k * 13.5;
	if (id == 6) cur.x += k * 8.47826, cur.y += k * 13;
	return cur;
}


struct point newPoint (double x, double y, double z) {
	struct point res;
	res.x = x, res.y = y, res.z = z;
	return res;
}

struct point get (struct angles ang) {

	double phi = ang.c + ang.b - PI;
	struct point M = newPoint (l1 * sin(ang.a), l1 * cos (ang.a), 0);
	struct point N = newPoint (l2 * cos (ang.b - PI / 2) * sin(ang.a), l2 * cos (ang.b - PI / 2) * cos (ang.a), -l2 * sin(ang.b - PI / 2));
	struct point P = newPoint (l3 * sin(phi) * sin(ang.a), l3 * sin(phi) * cos (ang.a), l3 * cos (phi));

	struct point res;
	res.x = M.x + N.x + P.x, res.y = M.y + N.y + P.y, res.z = M.z + N.z + P.z;
	return res;
}

void get_to_point (int id, double x, double y, double z) {
	
	struct point cur;
	cur.x = y, cur.y = x, cur.z = z;
	
	double phi = 0.99289438983;
	if (id == 3)
		phi = PI - phi;
	if (id == 2)
		phi = PI;
	if (id == 1)
		phi = phi + PI;
	if (id == 4)
		phi = 2 * PI - phi;
	if (id == 5)
		phi = 0;
		
	cur = normalize(cur, phi);
	
	struct angles ang = ik (cur.y, cur.x, cur.z);
	
	last_c[id] = newPoint(cur.y, cur.x, cur.z);
	
	double alpha = ang.a * R2D;
	double beta = ang.b * R2D;
	double gamma = ang.c * R2D;
	
	rotate(id, 1, alpha);
	rotate(id, 2, beta - 90);
	rotate(id, 3, 180 - gamma);
	
}


void rotate_x (double alpha) {
	struct point cur, res;
	alpha = alpha * PI / 180.;
	for (int id = 1; id <= 6; id++) {
		cur.x = last_c[id].y, cur.y = last_c[id].x, cur.z = last_c[id].z;
		cur = set_origin (id, cur, 1);
		res.x = cur.x, res.y = cur.y * cos (alpha) - cur.z * sin(alpha), res.z = cur.y * sin (alpha) + cur.z * cos (alpha);
		cur = set_origin (id, cur, -1);
		cur.x = res.y, cur.y = res.x, cur.z = res.z;
		get_to_point(id, cur.x, cur.y, cur.z);
	}
}

void rotate_y (double alpha) {
	struct point cur, res;
	alpha = alpha * PI / 180.;
	for (int id = 1; id <= 6; id++) {
		cur.x = last_c[id].y, cur.y = last_c[id].x, cur.z = last_c[id].z;
		cur = set_origin (id, cur, 1);
		res.x = cur.x * cos (alpha) + cur.z * sin (alpha), res.y = cur.y, res.z = -cur.x * sin (alpha) + cur.z * cos (alpha);
		cur = set_origin (id, cur, -1);
		cur.x = res.y, cur.y = res.x, cur.z = res.z;
		get_to_point(id, cur.x, cur.y, cur.z);
	}
}

void rotate_z (double alpha) {
	struct point cur, res;
	alpha = alpha * PI / 180.;
	for (int id = 1; id <= 6; id++) {
		cur.x = last_c[id].y, cur.y = last_c[id].x, cur.z = last_c[id].z;
		cur = set_origin (id, cur, 1);
		res.x = cur.x * cos (alpha) - cur.y * sin (alpha), res.y = cur.x * sin (alpha) + cur.y * cos (alpha), res.z = cur.z;
		cur = set_origin (id, cur, -1);
		cur.x = res.y, cur.y = res.x, cur.z = res.z;
		get_to_point(id, cur.x, cur.y, cur.z);
	}
}

void stand_up () {
	
	double y_const = 11, z_const = 5;
		
	get_to_point(5, 0, y_const, z_const);
	get_to_point(2, 0, -y_const, z_const);
	get_to_point(3, 0, -y_const, z_const);
	get_to_point(6, 0, y_const, z_const);
	get_to_point(1, 0, -y_const, z_const);
	get_to_point(4, 0, y_const, z_const);
	
	last_c[5] = newPoint(0, y_const, z_const);
	last_c[2] = newPoint(0, -y_const, z_const);
	last_c[3] = newPoint(0, -y_const, z_const);
	last_c[6] = newPoint(0, y_const, z_const);
	last_c[1] = newPoint(0, -y_const, z_const);
	last_c[4] = newPoint(0, y_const, z_const);
	
}