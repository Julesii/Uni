#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Linear_probing_hash_table.hpp"

using namespace std;

TEST_CASE("Create the linear_probing_hash_table")
 {
 Linear_probing_hash_table t;
 }


TEST_CASE("Create an entry")
 {
 unsigned char hash = 1;
 std::string key = "1";
 std::string value = "abc";
 Entry e1(1, "1", "abc");
 }


TEST_CASE("Insert an entry")
 {
 Linear_probing_hash_table t;
 Entry e1(1, "1", "abc");
  t.insert(&e1);
 }


TEST_CASE("Get the index for an inserted hash")
 {
 Linear_probing_hash_table t;
 unsigned char hash = 1;
 std::string key = "1";

 Entry e1(hash, key, "abc");
  t.insert(&e1);

 int index = t.get_index(hash, key);
 }


TEST_CASE("Remove an Entry")
 {
 Linear_probing_hash_table t;
 Entry *e1_1 = new Entry(1, "1", "abc");
 Entry *e1_2 = new Entry(1, "2", "def");
  t.insert(e1_1);
  t.insert(e1_2);

 unsigned char hash = 1;
 std::string key = "1";
  t.remove(hash, key);
 }

