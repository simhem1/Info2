#include "binary_search.hpp"

int binary_search_upper (std::vector<Spaceship> ships, Spaceship ship){


	int untereSchranke = ((ship.getSpeed())/100)*100;
	int obereSchranke = untereSchranke+99;
	int mitte;
	bool maximum_gefunden=false;
	for(int suchwert = obereSchranke; suchwert > untereSchranke-1; suchwert--){
		while((untereSchranke <= obereSchranke) && maximum_gefunden==false){
			mitte=untereSchranke+((obereSchranke-untereSchranke)/2);
			if(ships[mitte].getSpeed()==suchwert)
				maximum_gefunden=true;
				return mitte;
			if(ships[mitte].getSpeed()>suchwert)
				obereSchranke=mitte-1;
			if(ships[mitte].getSpeed()<suchwert)
				untereSchranke=mitte+1;
			}
	}
}
