#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Linked_list.hpp"

TEST_CASE("Creation") {
    std::string value = "x";
    Linked_list *head = new Linked_list(value);
}

TEST_CASE("Getting an attribute") {
    Linked_list *head = new Linked_list("x");
    std::string str = head->get();
    REQUIRE(str == "x");

    //Test a different string
    head = new Linked_list("xxxx");
    str = head->get();
    REQUIRE(str == "xxxx");
}

TEST_CASE("Getting the next node") {
    Linked_list *head = new Linked_list("x");
    Linked_list *next = head->next();
    REQUIRE(next == NULL);
}

TEST_CASE("Setting an attribute") {
    Linked_list *head = new Linked_list("x");
    head->set("a");
    REQUIRE(head->get() == "a");
}

TEST_CASE("Insertion") {
    Linked_list *a = new Linked_list("a");
    Linked_list *b = new Linked_list("b");
    Linked_list *c = new Linked_list("c");
    Linked_list *d = new Linked_list("d");

    //Insert at index 1
    Linked_list *start;
    start = b->insert_at_index(1, c);
    REQUIRE(start == b);
    REQUIRE(start->next() == c);


    //Insert at index 0
    start = b->insert_at_index(0, a);
    REQUIRE(start == a);
    REQUIRE(start->next() == b);
    REQUIRE(start->next()->next() == c);


    //Insert at index 3
    start = start->insert_at_index(3, d);
    REQUIRE(start == a);
    REQUIRE(start->next() == b);
    REQUIRE(start->next()->next() == c);
    REQUIRE(start->next()->next()->next() == d);
}

TEST_CASE("Insertion - Error case") {
    Linked_list *a = new Linked_list("a");
    Linked_list *b = new Linked_list("b");
    Linked_list *c = new Linked_list("c");
    Linked_list *d = new Linked_list("d");

    //Insert out of bounds
    Linked_list *start;
    start = a->insert_at_index(2, b);
    REQUIRE(start == NULL);


    a->insert_at_index(1, b);
    start = a->insert_at_index(3, c);
    REQUIRE(start == NULL);

    //Insert element is LinkedList itself
    c->insert_at_index(1, d);
    start = a->insert_at_index(2, c);
    REQUIRE(start == NULL);
}


TEST_CASE("Getting the next node with element") {
    Linked_list *head = new Linked_list("abc");
    Linked_list *element = new Linked_list("efg");
    head->insert_at_index(1, element);
    REQUIRE(head->next() == element);
}

TEST_CASE("Removal") {

    //Remove itself
    Linked_list *a = new Linked_list("a");
    Linked_list *start = a->remove_at_index(0);
    REQUIRE(start == NULL);

    //Remove at index 0
    a = new Linked_list("a");
    Linked_list *b = new Linked_list("b");
    a->insert_at_index(1, b);
    start = a->remove_at_index(0);
    REQUIRE(start == b);
    REQUIRE(start->next() == NULL);
}

TEST_CASE("Removal - later") {

    //Remove at index 1
    Linked_list *a = new Linked_list("a");
    Linked_list *b = new Linked_list("b");
    Linked_list *c = new Linked_list("c");
    a->insert_at_index(1, b);
    a->insert_at_index(2, c);
    Linked_list *start = a->remove_at_index(1);
    REQUIRE(start == a);
    REQUIRE(start->next() == c);


    //Remove at index 2
    b = new Linked_list("b");
    a->insert_at_index(1, b);
    start = a->remove_at_index(2);
    REQUIRE(start == a);
    REQUIRE(start->next() == b);
}

TEST_CASE("Removal - error case") {
    //Remove out of bounds
    Linked_list *a = new Linked_list("a");
    Linked_list *b = new Linked_list("b");
    Linked_list *c = new Linked_list("c");
    a->insert_at_index(1, b);
    a->insert_at_index(2, c);
    Linked_list *start = a->remove_at_index(3);
    REQUIRE(start == NULL);
}


/************************ OLD TESTS.CPP **************************/

/*#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>

#include "Linked_list.hpp"


TEST_CASE("Creation")
 {
 std::string value = "x";
 Linked_list *head = new Linked_list(value);

 }


TEST_CASE("Getting an attribute")
 {
 Linked_list *head = new Linked_list("x");
 std::string str = head->get();
 }


TEST_CASE("Getting the next node")
 {
 Linked_list *head = new Linked_list("x");
 Linked_list *next = head->next();
 }


TEST_CASE("Setting an attribute")
 {
 Linked_list *head = new Linked_list("x");
  head->set("a");
 }


TEST_CASE("Insertion")
 {
 Linked_list *a = new Linked_list("a");
 Linked_list *b = new Linked_list("b");
 Linked_list *c = new Linked_list("c");

 Linked_list *start;
  start = b->insert_at_index(1, c);
  start = b->insert_at_index(0, a);
  std::cout << start->get() << "\n";
 }


TEST_CASE("Removal")
 {
 Linked_list *a = new Linked_list("a");
 Linked_list *start = a->remove_at_index(0);
 }


TEST_CASE("Removal - later")
 {
 Linked_list *a = new Linked_list("a");
 Linked_list *b = new Linked_list("b");
  a->insert_at_index(1, b);

 Linked_list *start = a->remove_at_index(1);
 }*/
