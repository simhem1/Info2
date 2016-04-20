/*
 * Simple_class.cpp
 *
 *  Created on: 18.04.2016
 *      Author: simon
 */

#include "Simple_class.hpp"

Simple_class :: Simple_class (int value){
	this->value = value;
}

Simple_class :: ~Simple_class(){

}

int Simple_class :: get() const {
	return value;
}

void Simple_class :: set(int value) {
	this->value = value;
}



