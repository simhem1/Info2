/*
 * Weekday_main.cpp
 *
 *  Created on: 06.05.2016
 *      Author: simon
 */

#include "Weekday_statistics.hpp"
#include <iostream>

using namespace std;

int main(void){
	Weekday_statistics weekday_statistic;
	int start_year=1900;
	int year_offset=0;
	weekday_statistic.count_13th(start_year, year_offset);
	cout << weekday_statistic.get_monday_value() << " mal Montag" << endl;
	cout << weekday_statistic.get_tuesday_value() << " mal Dienstag" << endl;
	cout << weekday_statistic.get_wednesday_value() << " mal Mittwoch" << endl;
	cout << weekday_statistic.get_thursday_value() << " mal Donnerstag" << endl;
	cout << weekday_statistic.get_friday_value() << " mal Freitag" << endl;
	cout << weekday_statistic.get_saturday_value() << " mal Samstag" << endl;
	cout << weekday_statistic.get_sunday_value() << " mal Sonntag" << endl;
	return 0;
}

