/*
	pinmode.h - Header file for declaring multiple pins as input/output.
	Created by Plaban Mohapatra & Anshul Jindal, June 30, 2018.
	Only for VSSUT Robotics Club Members.
*/

#include "Arduino.h"
#include "pinmode.h"

void pinmode::OUT(int num_out,...)
{
  int val;
  va_list outputPin_List;
  va_start (outputPin_List, num_out);
  for(; num_out; num_out--)
  {
    val = va_arg(outputPin_List, int);
    pinMode(val, OUTPUT);
  }
  va_end(outputPin_List);
}

void pinmode::IN(int num_in,...)
{
  int val;
  va_list inputPin_List;
  va_start (inputPin_List, num_in);
  for(; num_in; num_in--)
  {
    val = va_arg(inputPin_List, int);
    pinMode(val, INPUT);
  }
  va_end(inputPin_List);
}