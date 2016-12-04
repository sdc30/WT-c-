//
//  file_loader.cpp
//
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#include "file_loader.hpp"



File_Loader::File_Loader(std::string filename){
	File_Loader::logging_on_flag = 1;
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "constructor" << std::endl;
	update_filename(filename);
}

File_Loader::File_Loader(std::string filename, int log_On){
	File_Loader::logging_on_flag = log_On;
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "constructor" << std::endl;
	update_filename(filename);
}

int File_Loader::open_file(){
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "open" << std::endl;
	std::fstream* fs = File_Loader::get_filestream();
	fs->open(File_Loader::get_filename(), std::fstream::in);
	if(File_Loader::file_status()) {
		if(File_Loader::logging_on_flag == LOGGING_ON)
			std::cout << "file good" << std::endl;
		return (0);
	} else {
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "file bad" << std::endl;
		return (-1);
	}
}

int File_Loader::close_file(){
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "close" << std::endl;
	std::fstream *fs = File_Loader::get_filestream();
	fs->close();
	if(File_Loader::file_status()) {
		if(File_Loader::logging_on_flag == LOGGING_ON)
			std::cout << "file open still" << std::endl;
		return (-1);
	} else {
		if(File_Loader::logging_on_flag == LOGGING_ON)
			std::cout << "file closed successfully" << std::endl;
		return (0);
	}
	
}

int File_Loader::file_status(){
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "file status" << std::endl;
	std::fstream *fs = File_Loader::get_filestream();
	return fs->is_open();
}

void File_Loader::update_filename(std::string filename) {
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "update filename" << std::endl;
	this->filename = filename;
}

std::string File_Loader::get_filename(){
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "get filename" << std::endl;
	return this->filename;
}

std::fstream* File_Loader::get_filestream() {
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "get filestream" << std::endl;
	return &(this->filestream);
}

void File_Loader::print_file_contents(){
	if(File_Loader::logging_on_flag == LOGGING_ON)
		std::cout << "pfc" << std::endl;
	File_Loader::open_file();
	std::string line;
	std::fstream* fs = File_Loader::get_filestream();
	// this->filestream
	
	while (std::getline(*fs, line)) {
		std::istringstream iss(line);
		
		int value;
		
		while(iss >> value) {
			std::cout << value << std::endl;
		}
		
		
	}
	
	File_Loader::close_file();
	
}
