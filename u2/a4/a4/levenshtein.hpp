/*
 * levenshtein.hpp
 *
 *  Created on: 05.05.2016
 *      Author: simon
 */

#ifndef BLATT2_U2_LEVENSHTEIN_HPP_
#define BLATT2_U2_LEVENSHTEIN_HPP_

#include <iostream>
#include <string>
class Levenshtein{
public:
	Levenshtein();
	~Levenshtein();
	int minimal(int*, std::string*, std::string*, int, int);
	int levenshtein_distance(std::string, std::string);

};



#endif /* BLATT2_U2_LEVENSHTEIN_HPP_ */
