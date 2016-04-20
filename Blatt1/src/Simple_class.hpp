/*
 * Simple_class.hpp
 *
 *  Created on: 18.04.2016
 *      Author: simon
 */

#ifndef SIMPLE_CLASS_HPP_
#define SIMPLE_CLASS_HPP_

class Simple_class{
private:
	int value;
public:
	int get() const;
	void set(int value);
	Simple_class(int value);
	~Simple_class();
};




#endif /* SIMPLE_CLASS_HPP_ */
