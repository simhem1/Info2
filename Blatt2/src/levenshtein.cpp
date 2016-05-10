/*
 * levenshtein.cpp
 *
 *  Created on: 05.05.2016
 *      Author: simon
 */

#include "levenshtein.hpp"

int Levenshtein :: minimal(int *D, std::string *original, std::string *katze, int i, int j){
	if((D[i-1][j-1] < ((D[i-1][j-1])+1)) && (D[i-1][j-1] < ((D[i-1][j-1])+1)) && (D[i-1][j-1] < ((D[i][j-1])+1)) && (D[i-1][j-1] < ((D[i-1][j])+1)))
		return D[i-1][j-1];
	else if



}

int Levenshtein :: levenshtein_distance(std::string original, std::string katze){
	Levenshtein Rechnung;
	unsigned int m,n;
	m=sizeof(original)/sizeof(char);
	n=sizeof(katze)/sizeof(char);
	int **D = new int* [m];
	for(unsigned int i=0; i < m; i++)
		D[i] = new int [n];
	for(unsigned int i=1; i<m+1; i++)
		D[i][0]=i;
	for(unsigned int j=1; j<n+1; j++)
		D[0][j]=j;
	for(unsigned int it=0; it<m; it++)
		delete[] D[it];
	delete[] D;









}





