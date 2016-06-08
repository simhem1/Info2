/*
 * Orange.cpp
 *
 *  Created on: 07.06.2016
 *      Author: simon
 */

#include "Orange.hpp"

Orange::Orange(const int sweetness, const int juicyness){
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
	return ((((this->juicyness<(other.getJuicyness())) && (this->sweetness<(other.getSweetness()))) || ((this->sweetness==(other.getSweetness())) && ((this->juicyness<(other.getJuicyness()))))? true : false));
}
