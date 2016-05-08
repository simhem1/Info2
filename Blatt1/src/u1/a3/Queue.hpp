#pragma once
#include "Linked_list.hpp"
#include <string>
class Queue{
    private:
        Linked_list *q_stack;
    public:
        Queue();
        ~Queue();
        void push(std::string);
        std::string pop();
        bool has_next();
};
