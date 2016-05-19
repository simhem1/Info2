/*
 * levenshtein.cpp
 *
 *  Created on: 05.05.2016
 *      Author: simon
 */

#include "levenshtein.hpp"

int Levenshtein :: minimal(int *D, std::string *original, std::string *katze, int i, int j){
	bool charsAreEqual=false;
	if(original[i]==katze[j])
		charsAreEqual=true;
	if(charsAreEqual){
		if(D[i-1][j-1] < D[i][j-1]+1 && D[i-1][j-1] < D[i-1][j]+1)
			D[i][j]=D[i-1][j-1];
		else if(D[i][j-1]+1 < D[i-1][j-1] &&  D[i][j-1]+1 < D[i-1][j]+1)
			D[i][j]=D[i][j-1]+1;
		else if(D[i-1][j]+1 < D[i-1][j-1] && D[i-1][j]+1 < D[i][j-1]+1)
			D[i][j]=D[i-1][j]+1;
	}
	else{
		if(D[i-1][j-1]+1 < D[i][j-1]+1 && D[i-1][j-1]+1 < D[i-1][j]+1)
			D[i][j]=D[i-1][j-1];
		else if(D[i][j-1]+1 < D[i-1][j-1]+1 &&  D[i][j-1]+1 < D[i-1][j]+1)
			D[i][j]=D[i][j-1]+1;
		else if(D[i-1][j]+1 < D[i-1][j-1]+1 && D[i-1][j]+1 < D[i][j-1]+1)
			D[i][j]=D[i-1][j]+1;
	}



}

int Levenshtein :: levenshtein_distance(std::string original, std::string katze){
	Levenshtein Rechnung;
	size_t m,n;					//size_t als Rückgabewert von std::length
	m=original.length();
	n=katze.length();
	/*hier ist Vorsicht angebracht: der Wertebereich von size_t kann größer sein als der von
	int, es besteht also die Gefahr eines Überlaufs!*/
	static_cast<int> (m);
	static_cast<int> (n);
	int *D = NULL;
	D = new int [m];

	delete[] D;

}





