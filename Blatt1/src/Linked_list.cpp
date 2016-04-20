/*
 * linked_list.cpp
 *
 *  Created on: 18.04.2016
 *      Author: simon
 */
#include "../Info2/Blatt1/src/Linked_list.hpp"

Linked_list :: Linked_list(const std::string& data){
	this->data=data;
	next_node=NULL;
}

Linked_list :: ~Linked_list(){

}

void Linked_list :: setString(const std::string& data){
	this->data=data;
}

const std::string& Linked_list :: getString(void){
	return data;
}

Linked_list* Linked_list :: next(void){
	return next_node;
}

Linked_list* Linked_list :: insert_at_index(unsigned int index, Linked_list* node_to_insert){




}

Linked_list* Linked_list :: remove_at_index(unsigned int index){



}



