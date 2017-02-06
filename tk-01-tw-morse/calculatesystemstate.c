#include "selfprot.h"

/*
 * Function: CalculateSystemState
 * --------------------------------------------
 * calculate the system state based on environment data and
 * stores the calculated state in the caught data structure
 *
 * env: contains environment data and calculated state will be stored in it
 */
void CalculateSystemState(EnvironmentData *env) {
	signed int x, y, z, temp;
	x = env->acc_x;
	y = env->acc_y;
	z = env->acc_z;
	temp = env->temp;
	int ra = x*x+y*y+z*z;

	if (temp > 34) {
    	env->state = HIGH_TEMP;
    	if (x > 2 || y > 2 || z >2 || ra > 9) {
    		env->state = HIGH_ACCELERATION_AND_TEMP;
    		return;
    	}
    }
    else if (x > 2 || y > 2 || z >2 || ra > 9){
    	env->state = HIGH_ACCELERATION;
    	return;
    }
    else {
    	env->state = OK;
    	return;
    }
}
