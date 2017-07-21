#ifndef __ENTRY_HPP__
#define __ENTRY_HPP__

#include <string>

class Entry
{
	public:
		unsigned char hash;
		std::string key;
		std::string value;

		Entry(unsigned char hash, std::string key, std::string value);
};

#endif

