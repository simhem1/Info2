#include "Queue.hpp"
Queue::Queue()
: q_stack(NULL){

}
Queue::~Queue(){

}
void Queue::push(std::string input){
    if(q_stack==NULL){
        q_stack=new Linked_list;
    }
    Linked_list *insert_data = q_stack->get_next();
    insert_data->set(input);
}
std::string Queue::pop(){
    std::string pop_data = q_stack->get();
    q_stack = q_stack->next();
    return pop_data;
}
bool Queue::has_next(){
    if(q_stack==NULL){
        return false;
    }
    else if(this->q_stack->next()!=NULL){
        return true;
    }
    else {
        return false;
    }
}
