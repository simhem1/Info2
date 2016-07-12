#include "Linear_probing_hash_table.hpp"

Linear_probing_hash_table::Linear_probing_hash_table()
 {
  table.resize(256, nullptr);
 }


int Linear_probing_hash_table::get_index(unsigned char hash, std::string key)
 {
	 
	 // remember that we use tha hash as _attempted_ index in the table
	 // ...
	 
	 // now iterate through the table and check if there already is an entry for the current index
	 // if we don't find an entry at the index where we intend to store data that's easy
	 // ...
	 // if the index is already taken we should do that linear probing stuff
    
	 
    // cover cases where the table at index is null
	 // ---
	 
	 // in the end we return the index that can store our entry
  return index;
 }


void Linear_probing_hash_table::insert(Entry *e)
 {
	 // insertion of a new entry to the table
 }     


void Linear_probing_hash_table::remove(unsigned char hash, std::string key)
 {
	 // for removing entries keep in mind that we might habe ti update indices
 }

