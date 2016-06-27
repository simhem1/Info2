#include "Hash_table.hpp"

// Implementierungen bitte!
Hash_table::Hash_table(){
    bewertungen.assign(256, -1);
}
void Hash_table::put(std::string title , int value){
    bewertungen.at((int)string_hash(title))=value;
}

int Hash_table::get(std::string title){
    return bewertungen[(int)string_hash(title)];
}
