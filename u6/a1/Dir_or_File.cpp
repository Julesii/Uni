#include "Dir_or_File.hpp"

Dir_or_File::Dir_or_File(std::string name)
{
	// constructor stuff goes here
	// make sure that is_file is set according to the '/' rules -> make a check here!
	
	//Wenn der name mit / endet ist es ein Ordner
	name.back() == '/' ? (is_file = false) : (is_file = true);
	this->name = name;
}


std::vector<std::string> Dir_or_File::split_after_slash(std::string full_path)
{
	// take care of '/'
	// check what comes after a slash and decide what to do according to what you find
	// so iterate through your string and find slashes
	// and then decide what to do...

	std::vector<std::string> ret;
	// iteration goes here

	int  last = 0;
	//Durchlaufe den Pfad und füge jeden Unterordner in den return vector hinzu 
	for(int i = 0;  i < full_path.length(); i++)
	{
		if(full_path[i] == '/')
		{
			if(i == 0)
			{
				ret.push_back("/");
				last = 1;
			}
			else
			{
				ret.push_back(full_path.substr(last, i-last+1));
				last = i+1;
			}
		}
		else if(i==full_path.length() - 1)
		{
			ret.push_back(full_path.substr(last, i-last+1));
		}
	}
	return ret;
}


void Dir_or_File::insert(std::vector<std::string> names)
{
	// now comes the insertion of new entries
	// again make sure to distinguihs between files and directories
	bool found = false;
	int ins;
	int size = names.size();

	//Überprüfe ob der Ordner/File name[0] schon in entries vorhanden ist
	for(int i=0; i < entries.size(); i++)
	{
		if(entries[i]->name == name + names[0])
		{
			if(size > 1)
			{
				//Inserte die restlichen Elemente in names in den bestehenden Ordner
				names.erase(names.begin());
				entries[i]->insert(names);
			}
			found = true;
		}
	}
	//Wenn nicht vorhanden erstelle einen neuen Ordner/File
	if(!found)
	{
		Dir_or_File *n = new Dir_or_File(name + names[0]);
		entries.push_back(n);
		if(size > 1)
		{
			names.erase(names.begin());
			n->insert(names);
		}
	}
}