#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Linear_probing_hash_table.hpp"

using namespace std;

TEST_CASE("Create the linear_probing_hash_table")
 {
 Linear_probing_hash_table t;
// NOT IN AUFGABEN START
   REQUIRE(t.table.size() == 256);
// NOT IN AUFGABEN END
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
// NOT IN AUFGABEN START
 Entry e2(2, "2", "def");
  t.insert(&e2);
  REQUIRE(t.table[1] == &e1);
// NOT IN AUFGABEN END
 }


TEST_CASE("Get the index for an inserted hash")
 {
 Linear_probing_hash_table t;
 unsigned char hash = 1;
 std::string key = "1";

 Entry e1(hash, key, "abc");
  t.insert(&e1);

 int index = t.get_index(hash, key);
// NOT IN AUFGABEN START
   REQUIRE(index == hash);
// NOT IN AUFGABEN END
 }


// NOT IN AUFGABEN START
TEST_CASE("Insert an Entry twice at the same position")
 {
 Linear_probing_hash_table t;
 Entry e1_1(1, "1", "abc");
 Entry e1_2(1, "2", "def");
  t.insert(&e1_1);
  t.insert(&e1_2);

 int index = t.get_index(1, "1");
   REQUIRE(index == 1);
  index = t.get_index(1, "2");
   REQUIRE(index == 2);
 }

TEST_CASE("Insert an Entry twice at the same position at the end")
 {
 Linear_probing_hash_table t;
 Entry e1_1(255, "1", "abc");
 Entry e1_2(255, "2", "def");
  t.insert(&e1_1);
  t.insert(&e1_2);

 int index = t.get_index(255, "1");
   REQUIRE(index == 255);
  index = t.get_index(255, "2");
   REQUIRE(index == 0);
 }
// NOT IN AUFGABEN END


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

// NOT IN AUFGABEN START
 int index = t.get_index(1, "2");
   REQUIRE(index == 1);
// NOT IN AUFGABEN END
 }

