//
//  file_loader.hpp
//  
//
//  Created by Stephen Cartwright on 11/28/16.
//
//

#ifndef file_loader_hpp
#define file_loader_hpp
#define LOGGING_ON 1

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


class File_Loader {
	
	public:
		File_Loader(std::string filename);
		File_Loader(std::string filename, int log_On);
		int open_file();
		int close_file();
		int file_status();
		void update_filename(std::string filename);
		std::string get_filename();
		void print_file_contents();
		std::fstream* get_filestream();
		int logging_on_flag;
	
	private:
		std::string filename;
		std::fstream filestream;
	
		
};

#endif /* file_loader_hpp */
