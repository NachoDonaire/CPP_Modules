#ifndef	MAIN_HPP
#define MAIN_HPP

#include "iostream"
#include "unistd.h"
#include "fstream"

std::string	bufferio(std::string file_name);
void		replace_file(std::string buffer, std::string name, std::string find, std::string subs);

#endif
