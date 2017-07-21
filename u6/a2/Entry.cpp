#include "Entry.hpp"

Entry::Entry(unsigned char hash, std::string key, std::string value)
{
	// just do the assignments here
	this->hash = hash;
	this->key = key;
	this->value = value;
}
