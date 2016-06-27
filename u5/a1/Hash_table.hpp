#ifndef __HASH_TABLE_HPP__
#define __HASH_TABLE_HPP__

#include <vector>
#include <string>
#include "string_hash.hpp"

class Hash_table {
    private:
        std::vector<int> bewertungen;
    public:
        Hash_table();
	// Platz für viele tolle Methoden und Parameter
        void put(std::string, int);
        int get(std::string title);
};

#endif
