#include "Linked_list.hpp"
Linked_list::Linked_list()
    : next_node(NULL){
}

Linked_list::~Linked_list(){

}

void Linked_list::set(std::string input){
    this->data=input;
}
std::string Linked_list::get(){
    return this->data;
}

Linked_list* Linked_list::next(){
    return this->next_node;
}

void Linked_list::set_next(Linked_list *nnext){
    this->next_node=nnext;
}

Linked_list* Linked_list::get_next(){
    Linked_list* head_node=this;
    //navigiere durch die liste
    while(1){
        if(head_node->next()==NULL){
            return head_node;
        }
        head_node=head_node->next();
    }
}

