
#include "binary_search.hpp"

int binary_search_upper (std::vector<Spaceship> ships, Spaceship ship){

	//Array mithilfe von Insertionsort aufsteigend sortieren
	int numberOfShips = ships.size();
	for(int i=2; i<numberOfShips; ++i){
		int temp = (ships.at(i).getSpeed());
		int j = i;
		while(j>0 && ships.at(j-1).getSpeed() > temp){
			ships.at(j+1).setSpeed(ships.at(j).getSpeed());
			j--;
		}
		ships.at(j).setSpeed(temp);
	}
	//Array mithilfe von Binary Search durchsuchen
	std::vector<Spaceship> shipsInvClass;
	int vClassOfargShip=((ship.getSpeed())/100);
	for(int i=0; i<ships.size(); ++i){
		if((ships.at(i).getSpeed()/100)==vClassOfargShip)
			shipsInvClass.push_back(ships.at(i));
	}
	int links=vClassOfargShip*100;
	int rechts=vClassOfargShip*100+99;
	int mitte;
	int k=vClassOfargShip*100+99;
	for(int i=links; i>rechts-1; --i){
		while(links<=rechts){
			mitte=(links+rechts)/2;
			if(shipsInvClass.at(i).getSpeed()==k)
				return i;
			else if(shipsInvClass.at(i).getSpeed()<k)
				mitte=i+1;
			else if(shipsInvClass.at(i).getSpeed()>k)
				mitte=i-1;
			}
		}
	}
