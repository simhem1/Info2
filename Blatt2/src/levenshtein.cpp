/*
 * levenshtein.cpp
 *
 *  Created on: 05.05.2016
 *      Author: simon
 */

#include "levenshtein.hpp"

int Levenshtein :: minimal(int *D, std::string *original, std::string *katze, int i, int j){
	if(D[i-1][j-1] < (D[i-1][j-1]+1) && D[i-1][j-1] < )

}

int Levenshtein :: levenshtein_distance(std::string original, std::string katze){
	Levenshtein Rechnung;
	unsigned int m,n,i,j;
	m=sizeof(original)/sizeof(char);
	n=sizeof(katze)/sizeof(char);
	int D[n][m];
	D[0][0]=0;
	for(unsigned int i=1; i<m+1; i++)
		D[i][0]=i;
	for(unsigned int j=1; j<n+1; j++)
		D[0][j]=j;








}





