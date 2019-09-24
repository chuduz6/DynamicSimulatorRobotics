/*Chudamani Aryal
	1000692493
	Due: Feb 28, 2012
	Question 1 and 2
*/

#include <stdio.h>
#include <math.h>


double PD_control(theta, theta_dot, theta_ref, theta_dot_ref)
double theta, theta_dot, theta_ref, theta_dot_ref;
{
	double kp = 1;
	// formula given on assignment
    double kv = 2*sqrt(kp);   
	double acceleration;
	
	// these are the values that I got from running the dynamics simulator
	double gravity = 1.176;
	double friction = 0.1000;
	double inertia = 0.0360;
	
    acceleration = kp*(theta_ref-theta) + kv*(theta_dot_ref-theta_dot);
	
	printf ("acce: %f \n", acceleration);
    
    return(gravity*cos(theta)+ friction*theta_dot+ inertia*acceleration); 
}
