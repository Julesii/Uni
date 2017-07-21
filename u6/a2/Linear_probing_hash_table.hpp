#ifndef __LINEAR_PROBING_HASH_TABLE_HPP__
#define __LINEAR_PROBING_HASH_TABLE_HPP__

#include <vector>

#include "Entry.hpp"

class Linear_probing_hash_table
{
	public:
		std::vector<Entry *> table;

		Linear_probing_hash_table();
		int get_index(unsigned char hash, std::string key);
		void insert(Entry *e);
		void remove(unsigned char hash, std::string key);
};

#endif

