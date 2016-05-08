#include "Linked_list.hpp"
Linked_list::Linked_list(std::string input)
    : data(input), next_node(NULL){
}

Linked_list::~Linked_list(){

}

void Linked_list::set(std::string input){
    this->data=input;
}
std::string Linked_list::get(){
    return this->data;
}

Linked_list* Linked_list::next(){
    return this->next_node;
}

void Linked_list::set_next(Linked_list *nnext){
    this->next_node=nnext;
}

Linked_list* Linked_list::insert_at_index(unsigned int pos, Linked_list *newnode){
    if(newnode->next() != NULL) {
        return NULL;
    }
    // einfach am anfang einfügen
    if(pos == 0)
    {
        newnode->set_next(this);
        return newnode;
    }
    // vor- und nachfolger von newnode suchen
    else
    {
        Linked_list* start=this;
        Linked_list* node_before_newnode=this;
        //navigiere durch kette
        for(unsigned int i=0; i<pos-1;i++) {
            node_before_newnode = node_before_newnode->next();
            if(node_before_newnode==NULL) {
                //liste ist zu ende, index out of bounds!!
                return NULL;
            }
        }
        //füge knoten ein
        Linked_list* node_after_newnode = node_before_newnode->next();
        node_before_newnode->set_next(newnode);
        newnode->set_next(node_after_newnode);

        return start;
    }
}

Linked_list* Linked_list::remove_at_index(unsigned int pos){
    Linked_list* start=this;
    Linked_list* node_before_wipenode=this;
    Linked_list* node_after_wipenode=this;
    //lösche ersten knoten und starte mit zweitem
    if(pos==0){
        return this->next();
    }
    //navigiere durch kette
    for(unsigned int i=0; i<pos-1; i++){
        node_before_wipenode = node_before_wipenode->next();
        if(node_before_wipenode->next()==NULL){
            //liste ist zu ende, index out of bounds!!
            return NULL;
        }
    }
    //lösche knoten und springe von vorherigem auf den nächsten
    node_after_wipenode = node_before_wipenode->next()->next();
    node_before_wipenode->next_node=node_after_wipenode;
    return start;
}
