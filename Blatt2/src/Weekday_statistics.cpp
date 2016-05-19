/*
 * Weekday_statistics.cpp
 *
 *  Created on: 04.05.2016
 *      Author: simon
 */

#include "Weekday_statistics.hpp"
#include "count_13th.hpp"
using namespace std;

	Weekday_statistics :: Weekday_statistics(){
		monday=0;
		tuesday=0;
		wednesday=0;
		thursday=0;
		friday=0;
		saturday=0;
		sunday=0;
	}

	Weekday_statistics :: ~Weekday_statistics(){

	}


	int Weekday_statistics :: get_monday_value() {
		return monday;
	}

	void Weekday_statistics :: set_monday_value(int monday) {
		this->monday = monday;
	}

	int Weekday_statistics :: get_tuesday_value() {
		return tuesday;
	}

	void Weekday_statistics :: set_tuesday_value(int tuesday) {
		this->tuesday = tuesday;
	}

	int Weekday_statistics :: get_wednesday_value() {
		return wednesday;
	}

	void Weekday_statistics :: set_wednesday_value(int wednesday) {
		this->wednesday = wednesday;
	}

	int Weekday_statistics :: get_thursday_value() {
		return thursday;
	}

	void Weekday_statistics :: set_thursday_value(int thursday) {
		this->thursday = thursday;
	}

	int Weekday_statistics :: get_friday_value() {
		return friday;
	}

	void Weekday_statistics :: set_friday_value(int friday) {
		this->friday = friday;
	}

	int Weekday_statistics :: get_saturday_value() {
		return saturday;
	}

	void Weekday_statistics :: set_saturday_value(int saturday) {
		this->saturday = saturday;
	}

	int Weekday_statistics :: get_sunday_value() {
		return sunday;
	}

	void Weekday_statistics :: set_sunday_value(int sunday) {
		this->sunday = sunday;
	}





