/*
 * levenshtein.cpp
 *
 *  Created on: 05.05.2016
 *      Author: simon
 */

#include "levenshtein.hpp"

Levenshtein :: Levenshtein(){

}

Levenshtein :: ~Levenshtein(){

}

int Levenshtein :: minimal(int *D, std::string *original, std::string *katze, int i, int j){
	/*Bestimmung der Laenge der Strings*/
	size_t s,z;
	s=original->length();
	z=katze->length();
	/*int-Cast(Anmerkung siehe distance-Funktion*/
	static_cast<int>(s);
	static_cast<int>(z);
	/*Erstellung zweidimensionales Hilfs-Array*/
	int **temp;
	for(int i=0; i<(z+1); i++)
		temp[i]= new int[s];
	/*Umrechnung eindimensionales in zweidimensionales Array*/
	for(int it=0; it < ((s+1)*(z+1)); it++){
			for(int z_it=0; z_it < (z+1); z_it++){
					for(int s_it=0; s_it < (s+1); s_it++){
						temp[z_it][s_it]=D[it];
					}
			}
	}
	/*Anwendung der vorgegebenen Formeln*/
	bool charsAreEqual=false;
	if(original[i]==katze[j])
		charsAreEqual=true;
	if(charsAreEqual){
		if(temp[i-1][j-1] < temp[i][j-1]+1 && temp[i-1][j-1] < temp[i-1][j]+1)
			temp[i][j]=temp[i-1][j-1];
		else if(temp[i][j-1]+1 < temp[i-1][j-1] &&  temp[i][j-1]+1 < temp[i-1][j]+1)
			temp[i][j]=temp[i][j-1]+1;
		else if(temp[i-1][j]+1 < temp[i-1][j-1] && temp[i-1][j]+1 < temp[i][j-1]+1)
			temp[i][j]=temp[i-1][j]+1;
	}
	else{
		if(temp[i-1][j-1]+1 < temp[i][j-1]+1 && temp[i-1][j-1]+1 < temp[i-1][j]+1)
			temp[i][j]=temp[i-1][j-1];
		else if(temp[i][j-1]+1 < temp[i-1][j-1]+1 &&  temp[i][j-1]+1 < temp[i-1][j]+1)
			temp[i][j]=temp[i][j-1]+1;
		else if(temp[i-1][j]+1 < temp[i-1][j-1]+1 && temp[i-1][j]+1 < temp[i][j-1]+1)
			temp[i][j]=temp[i-1][j]+1;
	}

	/*Rueckwandlung 2d nach 1d*/
	for(int it=0; it < ((s+1)*(z+1)); it++){
			for(int z_it=0; z_it < (z+1); z_it++){
					for(int s_it=0; s_it < (s+1); s_it++){
						D[it]=temp[z_it][s_it];
					}
			}
	}
	/*Hilsarray wieder freigeben*/
	for(int i=0; i<(z+1); i++)
		delete[] temp[i];
	delete[] temp;
	/*Rückgabe Minimal-Wert*/
	return D[(s+1)*(z+1)];
}

int Levenshtein :: levenshtein_distance(std::string original, std::string katze){
	Levenshtein Rechnung;
	size_t m,n;					//size_t als Rückgabewert von std::length
	int distanz=0;
	m=original.length();
	n=katze.length();
	/* Sofern ein String die Laenge 0 hat, entspricht die Levenshtein-Distanz
	 * der Laenge des anderen Strings */
	if(m==0)
		return n;
	if(n==0)
		return m;
	/*hier ist Vorsicht angebracht: der Wertebereich von size_t kann grösser sein als der von
	int, es besteht also die Gefahr eines Ueberlaufs!*/
	static_cast<int> (m);
	static_cast<int> (n);
	/*Erzeugung eindimensionales Array*/
	int *D = NULL;
	D = new int [(m+1)*(n+1)];
	/*Aufruf der minimal-Funktion
	distanz=minimal(D; "foo"; "bar" ; 5; 6);*/
	/*Array freigeben*/
	delete[] D;
	return distanz;
}





