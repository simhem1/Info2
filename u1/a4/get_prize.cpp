#include "get_prize.hpp"
unsigned int get_prize(unsigned int prize, Queue finish, std::string name){
    //diese funktion müsste eigentlich in eine eigene methode zum erstellen der liste....
    finish.push(name);
    while(finish.has_next()){
        //suche nach teilnehmer und gebe preis zurück
        if(finish.pop()==name){
            return prize;
        }
        prize=prize/2;
    }
    return 0;
}
