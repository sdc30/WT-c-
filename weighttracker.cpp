//
//  weighttracker.cpp
//  weighttracker
//
//  Created by Stephen Cartwright on 11/29/16.
//  Copyright © 2016 Ōmagatoki. All rights reserved.
//

#include "weighttracker.hpp"


int main (int argc, char ** argv) {
	
//	Gym_Member gm = Gym_Member("steve", "4 30 93");
//	gm.update_weight(2138.3);
//	gm.update_membership_length(21);
//	gm.print_details();
//	
	std::string file = "/Users/ranger/Desktop/c++/weighttracker/bmi_chart.txt";
	File_Loader fl = File_Loader(file, 1);
	fl.print_file_contents();

	
	
}
