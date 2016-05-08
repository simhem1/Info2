#pragma once
#include <string>
class Linked_list {
private:
    std::string data;
    Linked_list *next_node;
public:
    Linked_list();
    ~Linked_list();
    void set(std::string);
    std::string get();
    Linked_list* next();
    void set_next(Linked_list*);
    Linked_list* insert_at_index(unsigned int, Linked_list*);
    Linked_list* remove_at_index(unsigned int);
    Linked_list* get_next();

};
