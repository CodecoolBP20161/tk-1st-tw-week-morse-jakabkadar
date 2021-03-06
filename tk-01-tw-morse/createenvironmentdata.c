#include "selfprot.h"

/*
 * Function: CreateEnvironmentData
 * --------------------------------------------
 * converts input data into structured form
 *
 * acc_x: acceleration in the X direction
 * acc_y: acceleration in the Y direction
 * acc_z: acceleration in the Z direction
 * temp: magnitude of the temperature
 */
EnvironmentData CreateEnvironmentData(float acc_x, float acc_y, float acc_z, signed int temp)
{

	signed int ac_x, ac_y, ac_z, t;

	ac_x = (int)(acc_x*10 + 0.5);
	ac_y = (int)(acc_y*10 + 0.5);
	ac_z = (int)(acc_z*10 + 0.5);
	t = temp;
	EnvironmentData env = {ac_x, ac_y, ac_z, t};

	return env;

}
