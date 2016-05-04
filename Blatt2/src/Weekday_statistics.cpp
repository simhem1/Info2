/*
 * Weekday_statistics.cpp
 *
 *  Created on: 04.05.2016
 *      Author: simon
 */

#include "Weekday_statistics.hpp"

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

	Weekday_statistics Weekday_statistics :: count_13th(int start_year, int year_offset){
		Weekday_statistics Weekday_statistic;
		vector<int> temp;
		int i=0;
		bool schaltjahr=false;
		do{
			if(((start_year+i)%4==0)||(((start_year+i)%100==0)&&((start_year+i)%400==0)))
				schaltjahr=true;
			if(schaltjahr==true){
					temp.push_back((12+(start_year-1900)%7)%7);
					temp.push_back((43+(start_year-1900)%7)%7);
					temp.push_back((72+(start_year-1900)%7)%7);
					temp.push_back((103+(start_year-1900)%7)%7);
					temp.push_back((133+(start_year-1900)%7)%7);
					temp.push_back((165+(start_year-1900)%7)%7);
					temp.push_back((194+(start_year-1900)%7)%7);
					temp.push_back((225+(start_year-1900)%7)%7);
					temp.push_back((256+(start_year-1900)%7)%7);
					temp.push_back((286+(start_year-1900)%7)%7);
					temp.push_back((317+(start_year-1900)%7)%7);
					temp.push_back((347+(start_year-1900)%7)%7);


			}

			else{
					temp.push_back((12+(start_year-1900)%7)%7);
					temp.push_back((43+(start_year-1900)%7)%7);
					temp.push_back((71+(start_year-1900)%7)%7);
					temp.push_back((102+(start_year-1900)%7)%7);
					temp.push_back((132+(start_year-1900)%7)%7);
					temp.push_back((164+(start_year-1900)%7)%7);
					temp.push_back((193+(start_year-1900)%7)%7);
					temp.push_back((224+(start_year-1900)%7)%7);
					temp.push_back((255+(start_year-1900)%7)%7);
					temp.push_back((285+(start_year-1900)%7)%7);
					temp.push_back((316+(start_year-1900)%7)%7);
					temp.push_back((346+(start_year-1900)%7)%7);

			}

			i++;
		}while(i<year_offset);

		for(unsigned int i=0; i<temp.size(); i++){
			switch(temp.at(i)){
				case 0:
					Weekday_statistic.set_monday_value((Weekday_statistic.get_monday_value()+1)); break;
				case 1:
					Weekday_statistic.set_tuesday_value((Weekday_statistic.get_tuesday_value()+1)); break;
				case 2:
					Weekday_statistic.set_wednesday_value((Weekday_statistic.get_wednesday_value()+1)); break;
				case 3:
					Weekday_statistic.set_thursday_value((Weekday_statistic.get_thursday_value()+1)); break;
				case 4:
					Weekday_statistic.set_friday_value((Weekday_statistic.get_friday_value()+1)); break;
				case 5:
					Weekday_statistic.set_saturday_value((Weekday_statistic.get_saturday_value()+1)); break;
				case 6:
					Weekday_statistic.set_sunday_value((Weekday_statistic.get_sunday_value()+1)); break;
				default:
					break;
			}
		}


		return Weekday_statistic;
	}





