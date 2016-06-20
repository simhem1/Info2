/*
 * count_13th.cpp
 *
 *  Created on: 19.05.2016
 *      Author: simon
 */

#include "Weekday_statistics.hpp"
#include "count_13th.hpp"
#include <iostream>
using namespace std;


	Weekday_statistics Weekday_statistics :: count_13th(int start_year, int year_offset){
		Weekday_statistics weekday_statistic;
		int i=0;
		int j=0;
		/*Erzeugung eindimensionales Hilfsarray*/
		int *temp;
		temp=new int[year_offset*12];
		bool schaltjahr=false;
		do{
			/*Bestimmung ob Schaltjahr oder kein Schaltjahr*/
			if(((start_year+i)%4==0)||(((start_year+i)%100==0)&&((start_year+i)%400==0)))
				schaltjahr=true;
			if(schaltjahr==true){
					/*Bestimmung des Wochentages am jeweiligen 13ten des Monats
					 *bei einem Schaltjahr*/
					temp[j]=((12+(start_year-1900)%7)%7); j++;
					temp[j]=((43+(start_year-1900)%7)%7); j++;
					temp[j]=((72+(start_year-1900)%7)%7); j++;
					temp[j]=((103+(start_year-1900)%7)%7); j++;
					temp[j]=((133+(start_year-1900)%7)%7); j++;
					temp[j]=((165+(start_year-1900)%7)%7); j++;
					temp[j]=((194+(start_year-1900)%7)%7); j++;
					temp[j]=((225+(start_year-1900)%7)%7); j++;
					temp[j]=((256+(start_year-1900)%7)%7); j++;
					temp[j]=((286+(start_year-1900)%7)%7); j++;
					temp[j]=((317+(start_year-1900)%7)%7); j++;
					temp[j]=((347+(start_year-1900)%7)%7); j++;


			}

			else{
					/* Bestimmung des Wochentages am jeweiligen 13ten des Monats
					 * bei einem Nicht-Schaltjahr */
					temp[j]=((12+(start_year-1900)%7)%7); j++;
					temp[j]=((43+(start_year-1900)%7)%7); j++;
					temp[j]=((71+(start_year-1900)%7)%7); j++;
					temp[j]=((102+(start_year-1900)%7)%7); j++;
					temp[j]=((132+(start_year-1900)%7)%7); j++;
					temp[j]=((164+(start_year-1900)%7)%7); j++;
					temp[j]=((193+(start_year-1900)%7)%7); j++;
					temp[j]=((224+(start_year-1900)%7)%7); j++;
					temp[j]=((255+(start_year-1900)%7)%7); j++;
					temp[j]=((285+(start_year-1900)%7)%7); j++;
					temp[j]=((316+(start_year-1900)%7)%7); j++;
					temp[j]=((346+(start_year-1900)%7)%7); j++;
			}
			schaltjahr=false;
			i++;
		}while(i<year_offset);
		/*Analyse des Hilfsarrays bzgl. Häufigkeit der Wochentage und
		 *Zuweisung der Häufigkeit an die entsprechenden Objektattribute*/
		for(int i=0; i<(12*year_offset); i++){
			switch(temp[i]){
				case 0:
					weekday_statistic.set_monday_value((weekday_statistic.get_monday_value()+1)); break;
				case 1:
					weekday_statistic.set_tuesday_value((weekday_statistic.get_tuesday_value()+1)); break;
				case 2:
					weekday_statistic.set_wednesday_value((weekday_statistic.get_wednesday_value()+1)); break;
				case 3:
					weekday_statistic.set_thursday_value((weekday_statistic.get_thursday_value()+1)); break;
				case 4:
					weekday_statistic.set_friday_value((weekday_statistic.get_friday_value()+1)); break;
				case 5:
					weekday_statistic.set_saturday_value((weekday_statistic.get_saturday_value()+1)); break;
				case 6:
					weekday_statistic.set_sunday_value((weekday_statistic.get_sunday_value()+1)); break;
				default:
					break;
			}
		}
		return weekday_statistic;
		delete[] temp;
	}





