//
//  weighttrackerlib.cpp
//  
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#include "weighttrackerlib.hpp"


float Member_Tools::progress(float i, float j) {
	return (i - j);
}

float Member_Tools::goal_percent(float i, float j) {
	return i < j ? (i / j) * 100.0 : (j / i) * 100.0;
}

int Member_Tools::bmi(){
	// get current bmi
	int i = -1;
	return i;
}

float Member_Tools::weight(){
	// if it already lists weight, is this necessary?
	float i = -1.0;
	return i;
}

float Member_Tools::bmi_optimal(){
	// get bmi and calc opt
	float i = -1.0;
	return i;
}

float Member_Tools::healthy_drop(){
	// the drop to healthy bmi weight
	float i = -1.0;
	return i;
}


