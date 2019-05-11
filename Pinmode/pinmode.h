/*
	pinmode.h - Header file for declaring multiple pins as input/output.
	Created by Plaban Mohapatra & Anshul Jindal, June 30, 2018.
	Only for VSSUT Robotics Club Members.
*/

#ifndef pinmode_h
	#define pinmode_h

#include "Arduino.h"

class pinmode
{
	public:
		void IN(int num_in,...);
		void OUT(int num_out,...);
};

#endif