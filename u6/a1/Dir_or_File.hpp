#ifndef __DIR_OR_FILE_HPP__
#define __DIR_OR_FILE_HPP__

#include <string>
#include <vector>


class Dir_or_File
{
	public:
		std::string name;
		bool is_file;
		std::vector<Dir_or_File *> entries;

		Dir_or_File(std::string name);
		static std::vector<std::string> split_after_slash(std::string full_path);
		void insert(std::vector<std::string> names);
};


#endif

