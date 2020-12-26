

#ifndef RECOIL_H
#define RECOIL_H

#include "Vector2.h"
#include "Settings.h"

#include <math.h>

namespace Recoil
{
	/*
	* If button is pressed function
	*/
	//settings setts = { 0.111, 90 };
	vector2 calculateRecoil(vector2 angles);
	double calculateMagnitude(vector2 angles);

	/*
	namespace Mouse
	{
		/*
		* Simple lerp function to simulate smooth mouse movement

		void Lerp(Vector2 pos, double animation, double repeat_delay, std::chrono::time_point<std::chrono::steady_clock> f_excess);
	}

	*/
}
#endif