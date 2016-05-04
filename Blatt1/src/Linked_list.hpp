/*
 * Linked_list.hpp
 *
 *  Created on: 18.04.2016
 *      Author: simon
 */

#ifndef BLATT1_SRC_LINKED_LIST_HPP_
#define BLATT1_SRC_LINKED_LIST_HPP_
#include <iostream>

class Linked_list{
	private:
		std::string data;

	public:
		Linked_list(const std::string& data); 		//Konstruktor fuer Listenelemente
		~Linked_list();								//Destruktor fuer Listenelemente


		void setString(const std::string& data);	//set-Methode fuer Knoteninhalt
		const std::string& getString(void);			//get-Methode fuer Knoteninhalt


		Linked_list* next(void);					//next-Methode(gibt Zeiger auf naechsten Knoten zurueck)
		Linked_list* next_node;						//Zeiger auf naechsten Knoten

		//Methoden zum Hinzufuegen/Entfernen eines Knoten an einer bestimmten Position in der Liste
		Linked_list* insert_at_index(unsigned int index, Linked_list* node_to_insert);
		Linked_list* remove_at_index(unsigned int index);
};




#endif /* BLATT1_SRC_LINKED_LIST_HPP_ */
