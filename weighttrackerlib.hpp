//
//  weighttrackerlib.hpp
//  
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#ifndef weighttrackerlib_h
#define weighttrackerlib_h

#include <algorithm>
#include <iostream>
#include <string>

class Member_Tools {
	public:
		static float progress(float i, float j);
		static float goal_percent(float i, float j);
		static int bmi();
		static float weight();
		static float bmi_optimal();
		static float healthy_drop();
		
	
	
};

#endif /* weighttrackerlib_h */
