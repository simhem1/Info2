/*
 * Orange.hpp
 *
 *  Created on: 07.06.2016
 *      Author: Simon Hemmerich
 */

#ifndef U4_A1_ORANGE_HPP_
#define U4_A1_ORANGE_HPP_


class Orange{

private:
	int sweetness;
	int juicyness;

public:
	const int getSweetness(void);
	const int getJuicyness(void);
	void setSweetness(const int);
	void setJuicyness(const int);
	Orange(int, int);
	virtual ~Orange();
	bool operator<(Orange);
};





#endif /* U4_A1_ORANGE_HPP_ */
