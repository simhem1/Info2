/*
 * Apple.cpp
 *
 *  Created on: 09.06.2016
 *      Author: Simon Hemmerich
 */

#include "Apple.hpp"

Apple :: Apple(int sweetness, int juicyness){
	this->sweetness=sweetness;
	this->juicyness=juicyness;
}

Apple :: ~Apple() {

}

const int Apple :: getSweetness(void){
	return sweetness;
}

const int Apple :: getJuicyness(void){
	return juicyness;
}

void Apple :: setSweetness(const int sweetness){
	this->sweetness=sweetness;
}

void Apple :: setJuicyness(const int juicyness){
	this->juicyness=juicyness;
}

bool Apple :: operator<(Apple other){
	return
			(3*(this->getSweetness())+(this->getJuicyness()) < (3*(other.getSweetness()) + other.getJuicyness()))? true
			: false;
}
