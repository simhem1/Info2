#include "fastest_of_class.hpp"
#include <algorithm>

std::vector<Spaceship> fastest_of_class(std::vector<Spaceship> ships){
	std::vector<Spaceship> fastestShips;
	std::vector<int> vClasses;
	std::vector<Spaceship> dummyShips;
	for(int i=0; i<ships.size(); ++i)
		vClasses.push_back((ships.at(i).getSpeed())/100);
	vClasses.erase(unique(vClasses.begin(), vClasses.end()), vClasses.end());
	for(int i=0; i<vClasses.size(); ++i){
		dummyShips.at(i).setSpeed(vClasses.at(i)*100);
		dummyShips.at(i).setType(" ");
	}
	for(int i=0; i<dummyShips.size(); ++i)
		fastestShips.at(i)=ships.at(binary_search_upper(ships,fastestShips.at(i)));
	return fastestShips;
}
