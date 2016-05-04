/*
 * LInked_list_UI.cpp
 *
 *  Created on: 21.04.2016
 *      Author: simon
 */

#include <iostream>
#include "Linked_list.hpp"

using namespace std;

int main(void){
	Linked_list* head=NULL;
	Linked_list Knoten1("foo");
	head=&Knoten1;
	cout << &Knoten1 << endl;
	cout << head << endl;
	cout << Knoten1.getString() << endl;
	Knoten1.setString("bar");
	cout << Knoten1.getString() << endl;
	cout << Knoten1.next() << endl;
	Linked_list Knoten2("bar");
	Knoten1.next_node=&Knoten2;
	cout << &Knoten2 << endl;
	cout << Knoten1.next() << endl;
	return 0;
}




