#include "string_hash.hpp"

unsigned char string_hash(std::string s) {
        int ret=0;
        //Speichere den letzten Buchstaben als c
        unsigned char c=s[s.length()-1];
        if(s.length()!=0){
                //Verkürze den String um eins
                s.resize(s.length()-1);
                //Rekursion
                ret=string_hash(s)^c;
                //Zyklischer Shift nach Links
                ret=(ret << 1)|(ret >> (sizeof(char)*CHAR_BIT - 1));
        }
        std::cout << ret << std::endl;
        return (unsigned char)ret;
}

