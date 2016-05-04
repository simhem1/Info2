/*
 * Weekday_statistics.hpp
 *
 *  Created on: 04.05.2016
 *      Author: simon
 */

#ifndef BLATT2_SRC_WEEKDAY_STATISTICS_HPP_
#define BLATT2_SRC_WEEKDAY_STATISTICS_HPP_

/*
 * Weekday_statistics.cpp
 *
 *  Created on: 04.05.2016
 *      Author: simon
 */

#include <vector>

class Weekday_statistics{

private:
	int monday, tuesday, wednesday, thursday, friday, saturday, sunday;
public:

	Weekday_statistics();
	~Weekday_statistics();
	int get_monday_value();
	void set_monday_value(int);
	int get_tuesday_value();
	void set_tuesday_value(int);
	int get_wednesday_value();
	void set_wednesday_value(int);
	int get_thursday_value();
	void set_thursday_value(int);
	int get_friday_value();
	void set_friday_value(int);
	int get_saturday_value();
	void set_saturday_value(int);
	int get_sunday_value();
	void set_sunday_value(int);
	Weekday_statistics count_13th(int, int);
};






#endif /* BLATT2_SRC_WEEKDAY_STATISTICS_HPP_ */
