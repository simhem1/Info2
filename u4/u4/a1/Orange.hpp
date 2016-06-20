/*
 * Orange.hpp
 *
 *  Created on: 07.06.2016
 *      Author: Simon Hemmerich
 */

#ifndef U4_A1_ORANGE_HPP_
#define U4_A1_ORANGE_HPP_


class Orange{

public:
    int sweetness;
	int juicyness;

	Orange(int, int);
	virtual ~Orange();
	const int getSweetness(void);
	const int getJuicyness(void);
	void setSweetness(const int);
	void setJuicyness(const int);
	bool operator<(Orange);
};





#endif /* U4_A1_ORANGE_HPP_ */
