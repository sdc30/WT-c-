//
//  gym_member.cpp
//  
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#include "gym_member.hpp"
#include "weighttrackerlib.hpp"

Gym_Member::Gym_Member(std::string name, std::string dob){
	update_name(name);
	update_dob(dob);
}

Gym_Member::Gym_Member(std::string name){
	update_name(name);
}

std::string Gym_Member::generate_member_id(){
	//
	std::string s = "123";
	return s;
}

void Gym_Member::update_name(std::string name){
	this->name = name;
}

void Gym_Member::update_dob(std::string dob){
	this->dob = dob;
}

void Gym_Member::update_goal_weight(float goal_weight){
	this->goal_weight = goal_weight;
}

void Gym_Member::update_weight(float weight){
	this->weight = weight;
}

void Gym_Member::update_bmi(int bmi){
	this->bmi = bmi;
}

void Gym_Member::update_goal_bmi(int goal_bmi){
	this->goal_bmi = goal_bmi;
}

int Gym_Member::get_membership_length(){
	return this->days_left_membership;
}

std::string Gym_Member::get_member_name(){
	return this->name;
}

std::string Gym_Member::get_member_dob(){
	return this->dob;
}

void Gym_Member::update_membership_length(int days){
	this->days_left_membership = days;
}

void Gym_Member::pay_membership(float payment){
	//
}

void Gym_Member::del_member_account(){
	//
}

void  Gym_Member::print_details(){
	
	std::cout << "Name: " <<  Gym_Member::get_member_name() << std::endl;
	std::cout << "DOB: " <<  Gym_Member::get_member_dob() << std::endl;
	std::cout << "Age: " << this->age << std::endl;
	std::cout << "Member ID: " << this->ID << std::endl;
	std::cout << "Days left as a member: " <<  Gym_Member::get_membership_length() << std::endl;
	std::cout << "Current Weight: " << Member_Tools::bmi() << std::endl;
	std::cout << "Goal Weight: " << this->goal_weight << std::endl;
	std::cout << "Current BMI: " << this->bmi << std::endl;
	std::cout << "Healthy BMI: " << this->goal_bmi << std::endl;
	
	
}

