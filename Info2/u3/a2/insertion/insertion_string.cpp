/*
 * insertion_string.cpp
 *
 *  Created on: 26.05.2016
 *      Author: simon
 */

#include "insertion_string.hpp"

#include <iostream>

std::vector<std::string> insertion_sort (std::vector<std::string> strings, char c){

	// use the size() function to get the number of strings from the vector
	int number_of_strings = strings.size();
	int i=2;
	for(int i=1; i<number_of_strings;i++){
		std::string temp = strings.at(i);
		int j = i-1;
		while(j>=0 && (compare_to(strings.at(i),temp, c) == 1)){
			strings.at(j+1)=strings.at(j);
			j--;
		}
		strings.at(j+1)=temp;
	}

	// TODO: insertion sort should go here...

	// this should be the sorted vector of strings
	return strings;
}

int compare_to(std::string a, std::string b, char c) {

	// these will carry the counts of chars in both strings

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

	// return a value that represents the comparison result

	if(counter_a<counter_b)
		return 1;
	else
		return 0;

}



