/*
 * selection_string.cpp
 *
 *  Created on: 26.05.2016
 *      Author: simon
 */

#include "selection_string.hpp"
#include <iostream>

std::vector<std::string> selection_sort (std::vector<std::string> strings, char c) {

	int links;
	int minimum;

	do{
		minimum=links;
		for(int i=links+1; i<strings.size(); i++){
			if(compare_by_frequency(strings.at(i), strings.at(minimum), c)==1){
				minimum=i;
			}
		}
		(strings.at(links)).swap(strings.at(minimum));
		links++;
	}while(links<strings.size());


//TODO selection sort...

	return strings;
}

int compare_by_frequency(std::string a, std::string b, char c) {

	int counter_a=0;
	int counter_b=0;
	for(int i=0; i<a.length(); i++){
		if(a.at(i)==c)
			counter_a++;
	}
	for(int i=0; i<b.length(); i++){
		if(a.at(i)==c)
			counter_b++;
	}

	if(counter_a<counter_b)
		return 1;
	else
		return 0;
}





