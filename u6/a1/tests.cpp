#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Dir_or_File.hpp"
#include <iostream>
using namespace std;

TEST_CASE("Create the root-dir")
{
	Dir_or_File root("/oo");
	cout << root.is_file;
}

TEST_CASE("Split /dir/subdir/")
{
	std::string s = "/dir/subdir/";
	vector<string> splitters = Dir_or_File::split_after_slash(s);
}


TEST_CASE("Split /dir/subdir/file.txt")
{
	std::string s = "/dir/subdir/file.txt";
	vector<string> splitters = Dir_or_File::split_after_slash(s);
}


TEST_CASE("Insert a directory")
{
	Dir_or_File root("/");
	root.insert(Dir_or_File::split_after_slash("dir/subdir/"));
}


TEST_CASE("Insert a file")
{
	Dir_or_File root("/");
	root.insert(Dir_or_File::split_after_slash("dir/file.txt"));
}


TEST_CASE("Insert multiple things")
{
	Dir_or_File root("/");
	root.insert(Dir_or_File::split_after_slash("dir/file_b.txt"));
	root.insert(Dir_or_File::split_after_slash("dir/file_a.txt"));
	root.insert(Dir_or_File::split_after_slash("dir/subdir/"));
}

