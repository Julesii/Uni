#include "Linear_probing_hash_table.hpp"

Linear_probing_hash_table::Linear_probing_hash_table()
{
	table.resize(256, nullptr);
}


int Linear_probing_hash_table::get_index(unsigned char hash, std::string key)
{

	// remember that we use tha hash as _attempted_ index in the table
	// ...

	// now iterate through the table and check if there already is an entry for the current index
	// if we don't find an entry at the index where we intend to store data that's easy
	// ...
	// if the index is already taken we should do that linear probing stuff


	// cover cases where the table at index is null
	// ---

	// in the end we return the index that can store our entry
	unsigned char index;
	for(int i = 0; i < 256; i++)
	{
		index = (hash + i) % 256;
		if(table[index] != nullptr)
		{
			if(table[index]->key == key)
				return index;
		}
		else
			return -1;
	}
	return index;
}


void Linear_probing_hash_table::insert(Entry *e)
{
	// insertion of a new entry to the table
	unsigned char hash = e->hash;
	if(table[hash] == nullptr)
		table[hash] = e;
	else
	{
		int count = 0;
		bool done = false;
		while(count < 255 && !done)
		{
			count++;
			unsigned char index = (hash+count) % 256;
			if(table[index] == nullptr)
			{
				table[index] = e;
				done = true;
			}
		}
	}
}     


void Linear_probing_hash_table::remove(unsigned char hash, std::string key)
{
	// for removing entries keep in mind that we might habe ti update indices
	int index = get_index(hash, key);
	if(index == 255 | table[index+1] == nullptr)
		table[index] = nullptr;
	else
	{
		if(table[index+1]->hash == index+1)
		{
			table[index] = nullptr;
		}
		else
		{
			table[index] = table[index+1];
			remove(index+1, table[index]->key);
		}
	}
}

