#include "binary_search.hpp"

int binary_search_upper (std::vector<Spaceship> ships, Spaceship ship){

	//Array mithilfe von Insertionsort aufsteigend sortieren
	int numberOfShips = ships.size();
	for(int i=2; i<numberOfShips; ++i){
		int temp = (ships.at(i).getSpeed());
		int j = i;
		while((j>0) && (ships.at(j-1) > temp)){
			ships.at(j+1).setSpeed(ships.at(j).getSpeed());
			j--;
		}
		ships.at(j).setSpeed(temp);
	}
	//Array mithilfe von Binary Search durchsuchen
	int links=0;
	int rechts=numberOfShips;
	int mitte;
	while(links<=rechts){
		mitte=(links+rechts)/2;
		//if(ship==ships.at(mitte))
			return mitte;
		//else if(Ship)
	}
	int k=0;
	int vKlasse_argShip=((ship.getSpeed())/100);






    return 1;




}
