/*
 * Apple.hpp
 *
 *  Created on: 09.06.2016
 *      Author: Simon Hemmerich
 */

#ifndef U4_A2_APPLE_HPP_
#define U4_A2_APPLE_HPP_

class Apple{
private:
	int sweetness;
	int juicyness;
public:
	Apple(int,int);
	virtual ~Apple();
	const int getSweetness(void);
	const int getJuicyness(void);
	void setSweetness(const int);
	void setJuicyness(const int);
	bool operator<(Apple other);

};



#endif /* U4_A2_APPLE_HPP_ */
