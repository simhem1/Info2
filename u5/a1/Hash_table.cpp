#include "Hash_table.hpp"

// Implementierungen bitte!
Hash_table::Hash_table(){
    //Initialisiere Vektor mit 256 Feldern und -1 als Werten
    bewertungen.assign(256, -1);
}
void Hash_table::put(std::string title , int value){
    //Erstelle Hash vom String und benutze diesen als Index
    bewertungen.at((int)string_hash(title))=value;
}

int Hash_table::get(std::string title){
    //Erstelle Hash vom String und suche mit ihm als Index im Vektor
    return bewertungen[(int)string_hash(title)];
}
