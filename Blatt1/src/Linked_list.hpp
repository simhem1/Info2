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
		Linked_list *next_node;

	public:
		Linked_list(const std::string& data);
		~Linked_list();
		void setString(const std::string& data);
		const std::string& getString(void);
		Linked_list* next(void);
		Linked_list* insert_at_index(unsigned int index, Linked_list* node_to_insert);
		Linked_list* remove_at_index(unsigned int index);
};




#endif /* BLATT1_SRC_LINKED_LIST_HPP_ */
