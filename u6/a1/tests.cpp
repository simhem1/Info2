u#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Dir_or_File.hpp"

using namespace std;

TEST_CASE("Create the root-dir")
 {
 Dir_or_File root("/");
// NOT IN AUFGABEN START
  REQUIRE(root.name == "/");
  REQUIRE(root.is_file == false);
  REQUIRE(root.entries.size() == 0);
// NOT IN AUFGABEN END
 }

TEST_CASE("Split /dir/subdir/")
 {
 std::string s = "/dir/subdir/";
 vector<string> splitters = Dir_or_File::split_after_slash(s);
// NOT IN AUFGABEN START
  REQUIRE(splitters.size() == 3);
  REQUIRE(splitters[0] == "/");
  REQUIRE(splitters[1] == "dir/");
  REQUIRE(splitters[2] == "subdir/");
// NOT IN AUFGABEN END
 }


TEST_CASE("Split /dir/subdir/file.txt")
 {
 std::string s = "/dir/subdir/file.txt";
 vector<string> splitters = Dir_or_File::split_after_slash(s);
// NOT IN AUFGABEN START
  REQUIRE(splitters.size() == 4);
  REQUIRE(splitters[0] == "/");
  REQUIRE(splitters[1] == "dir/");
  REQUIRE(splitters[2] == "subdir/");
  REQUIRE(splitters[3] == "file.txt");
// NOT IN AUFGABEN END
 }


TEST_CASE("Insert a directory")
 {
 Dir_or_File root("/");
  root.insert(Dir_or_File::split_after_slash("dir/subdir/"));
// NOT IN AUFGABEN START
  REQUIRE(root.entries.size() == 1);
  REQUIRE(root.entries[0]->name == "dir/");
  REQUIRE(root.entries[0]->is_file == false);

  REQUIRE(root.entries[0]->entries.size() == 1);
  REQUIRE(root.entries[0]->entries[0]->name == "subdir/");
  REQUIRE(root.entries[0]->entries[0]->is_file == false);
// NOT IN AUFGABEN END
 }


TEST_CASE("Insert a file")
 {
 Dir_or_File root("/");
  root.insert(Dir_or_File::split_after_slash("dir/file.txt"));
// NOT IN AUFGABEN START
  REQUIRE(root.entries.size() == 1);
  REQUIRE(root.entries[0]->name == "dir/");
  REQUIRE(root.entries[0]->is_file == false);

  REQUIRE(root.entries[0]->entries.size() == 1);
  REQUIRE(root.entries[0]->entries[0]->name == "file.txt");
  REQUIRE(root.entries[0]->entries[0]->is_file == true);
// NOT IN AUFGABEN END
 }


TEST_CASE("Insert multiple things")
 {
 Dir_or_File root("/");
  root.insert(Dir_or_File::split_after_slash("dir/file_b.txt"));
  root.insert(Dir_or_File::split_after_slash("dir/file_a.txt"));
  root.insert(Dir_or_File::split_after_slash("dir/subdir/"));

// NOT IN AUFGABEN START
  REQUIRE(root.entries.size() == 1);
  REQUIRE(root.entries[0]->name == "dir/");
  REQUIRE(root.entries[0]->is_file == false);

  REQUIRE(root.entries[0]->entries.size() == 3);
  REQUIRE(root.entries[0]->entries[0]->name == "file_a.txt");
  REQUIRE(root.entries[0]->entries[0]->is_file == true);
  REQUIRE(root.entries[0]->entries[1]->name == "file_b.txt");
  REQUIRE(root.entries[0]->entries[1]->is_file == true);
  REQUIRE(root.entries[0]->entries[2]->name == "subdir/");
  REQUIRE(root.entries[0]->entries[2]->is_file == false);
// NOT IN AUFGABEN END
 }

