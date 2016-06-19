/*
 * Orange.cpp
 *
 *  Created on: 07.06.2016
 *      Author: Simon Hemmerich
 */

#include "Orange.hpp"

Orange::Orange(int sweetness,  int juicyness){
	this->sweetness=sweetness;
	this->juicyness=juicyness;
}

Orange::~Orange(){

}

void Orange::setSweetness(const int sweetness){
	this->sweetness=sweetness;
}

void Orange::setJuicyness(const int juicyness){
	this->juicyness=juicyness;
}

const int Orange::getSweetness(void){
	return sweetness;
}

const int Orange::getJuicyness(void){
	return juicyness;
}

bool Orange::operator<(Orange other){
	return
		( (this->juicyness<( other.getJuicyness() ) ) && (this->sweetness<( other.getSweetness() ) ) ) ? true
		: ( (this->sweetness==( other.getSweetness() ) ) && (this->juicyness<(other.getJuicyness() ) ) ) ? true
		: false;
}
