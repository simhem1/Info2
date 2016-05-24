/*
 * buffy_vampire_slayer.cpp
 *
 *  Created on: 23.05.2016
 *      Author: simon
 */

#include "buffy_vampire_slayer.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdlib>


using namespace std;

void buffy(void){
	int gesamt;
	cout << "Gesamtzahl: ";
	cin >> gesamt;
	//int *bestand = new int[gesamt];
	string eingabe;
	cout << "Werte eingeben: ";
	getline(cin, eingabe);
	//cout << "bla" << endl;
	cout << eingabe << endl;
	eingabe.erase(remove_if(eingabe.begin(), eingabe.end(), ::isspace), eingabe.end());
	cout << eingabe << endl;







	//delete[] bestand;

}



