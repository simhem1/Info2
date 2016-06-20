#include "Simple_class.hpp"
Simple_class::Simple_class(int val)
: data(val) {
}
Simple_class::~Simple_class(){

}

int Simple_class::get(){
    return data;
}

void Simple_class::set(int in){
    data=in;
}
