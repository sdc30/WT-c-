//
//  gym_member.hpp
//  
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#ifndef gym_member_hpp
#define gym_member_hpp

#include <stdio.h>
#include <string>

class Gym_Member {
	
	public:
		Gym_Member(std::string name, std::string dob);
		Gym_Member(std::string name);
		std::string generate_member_id();
		void update_name(std::string name);
		void update_dob(std::string dob);
		void update_goal_weight(float goal_weight);
		void update_weight(float weight);
		void update_bmi(int bmi);
		void update_goal_bmi(int goal_bmi);
		int get_membership_length();
		std::string get_member_name();
		std::string get_member_dob();
		void update_membership_length(int days);
		void pay_membership(float payment);
		void del_member_account();
		void print_details();
	
	private:
		//std:string get_payment_info();
		std::string cc_number;
		std::string name;
		std::string dob;
		int age;
		float weight;
		float goal_weight;
		int goal_bmi;
		int bmi;
		int days_left_membership;
		int ID;
		std::string height;
		std::string member_join_date;
		std::string phone_number;
		std::string emergency_contact_info;
		std::string address;
		
	
};


#endif /* gym_member_hpp */
