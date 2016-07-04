#include "Spaceship.hpp"

Spaceship::Spaceship(std::string type, int speed)
{
	this->type="";
	this->speed=0;
}
Spaceship::~Spaceship()
{

}
bool Spaceship::operator==(Spaceship other){
	if(((this->speed)/100)==((other.getSpeed())))
		return true;
	else
		return false;
}

void Spaceship::setSpeed(const int speed){
	this->speed=speed;
}

const int Spaceship::getSpeed(void){
	return speed;
}

void Spaceship::setType(const std::string& type){
	this->type=type;
}

const std::string& Spaceship::getType(void){
	return type;
}
