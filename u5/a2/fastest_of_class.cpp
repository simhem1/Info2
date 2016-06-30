#include "fastest_of_class.hpp"
#include <algorithm>

void operator= (Spaceship spaceship, Spaceship other){
	spaceship.setSpeed(other.getSpeed());
	spaceship.setType(other.getType());
}
std::vector<Spaceship> fastest_of_class(std::vector<Spaceship> ships){
	std::vector<Spaceship> filtered_shiplist;
	std::vector<Spaceship> ships_temp;
	std::vector<int> vClasses;
	std::vector<Spaceship> dummyShips;
	for(int i=0; i<ships.size(); ++i)
		ships_temp.at(i).push_back(ships.at(i));
	for(int i=0; i<ships_temp.size(); ++i)
		vClasses.push_back((ships_temp.at(i).getSpeed())/100);
	int last = std::unique(vClasses.begin(); vClasses.end());
	vClasses.erase(last; vClasses.end());
	for(int i=0; i<vClasses.size(); ++i){
		dummyShips.at(i).setSpeed(vClasses.at(i)*100);
		dummyShips.at(i).setType(" ");
	}
	for(int i=0; i<dummyShips.size(); ++i)
		filtered_shiplist.at(i)=binary_search_upper(dummyShips.at(i));

	return filtered_shiplist;
}
