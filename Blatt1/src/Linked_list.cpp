/*
 * linked_list.cpp
 *
 *  Created on: 18.04.2016
 *      Author: simon
 */

#include "Linked_list.hpp"


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
	/*Iteration bis zu einer bestimmten Stelle in der Liste
	wohin mit dem current-Pointer?
	ueber Iteration Ende der Liste bestimmen und dann Abfrage bzgl. Einfügen jenseits der Liste




	 */
	Linked_list neuerKnoten;


}

Linked_list* Linked_list :: remove_at_index(unsigned int index){

	/*Iteration bis zu einer bestimmten Stelle in der Liste
		wohin mit dem current-Pointer?
		ueber Iteration Ende der Liste bestimmen und dann Abfrage bzgl. Entfernen jenseits der Liste
	 */


}




