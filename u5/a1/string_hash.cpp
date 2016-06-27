#include "string_hash.hpp"

unsigned char string_hash(std::string s) {
        int ret=0;
        int c=(int)s[s.length()-1];
        if(c!=s[0]){
                s.resize((int)s.length()-1);
                ret=(int)string_hash(s)^c;
                ret=(ret<<1)%255;
        }
        std::cout << ret << std::endl;
        return (unsigned char)ret;
}
