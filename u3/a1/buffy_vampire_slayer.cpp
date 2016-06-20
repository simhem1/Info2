#include "buffy_vampire_slayer.hpp"
#include <iostream>

// take all powers and count those of the zombies and vampires
// we return a struct that carries the counter of both creature types
creature_counts count_creatures(int N, int creature_powers[]) {

	// this will be our return element
	creature_counts counts;

	// these will carry the overall powers of both creature types
	int sum_zombie_powers = 0;
	int sum_vampire_powers = 0;
	int count_zombies = 0;
	int count_vampires = 0;


	// implement the counting operations here...

	for(int i=0; i<N; i++){
		if(creature_powers[i]%2==0){
			count_zombies++;
			sum_zombie_powers+=creature_powers[i];
	}
		else {
			count_vampires++;
			sum_vampire_powers+=creature_powers[i];
		}

	}

	counts.zombie_count = count_zombies;
	counts.vampire_count = count_vampires;
	counts.zombie_sum = sum_zombie_powers;
	counts.vampire_sum = sum_vampire_powers;

	return counts;
}

void swap(int *a,int *b) {
	// do all the swapping!!!
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

// take all monsters and sort them
int *sort(int *elements, int length) {

	// perform your sorting on the elements
	// you can treat it just like a normal array, indexing like element[i], ...

	// return the pointer to the now sorted array
	int links, minimum, zombies, vampires;
	links=0;
	minimum=0;
	zombies=0;
	vampires=0;
	for(int i=0; i<length; i++){
		if(elements[i]%2==0)
			zombies++;
		else
			vampires++;
	}
	int *zombie_array = new int[zombies];
	int *vampire_array = new int [zombies];
	int zombie_array_count=0;
	int vampire_array_count=0;

	for(int i=0; i<length; i++){
		if(elements[i]%2==0){
			zombie_array[zombie_array_count]=elements[i];
			zombie_array_count++;
		}
		else{
			vampire_array[vampire_array_count]=elements[i];
			vampire_array_count++;
		}
	}

	do{
		minimum=links;
		for(int i=links+1; i<zombies; i++){
			if(zombie_array[i]<zombie_array[minimum])
					minimum=i;
		}
		swap(&zombie_array[links], &zombie_array[minimum]);
		links++;
	}while (links<zombies);

	minimum=0;
	links=0;

	do{
		minimum=links;
		for(int i=links+1; i<vampires; i++){
			if(vampire_array[i]<vampire_array[minimum])
					minimum=i;
		}
		swap(&vampire_array[links], &vampire_array[minimum]);
		links++;
	}while (links<vampires);


	for(int i=0; i<zombies; i++)
		elements[i]=zombie_array[i];
	for(int i=0; i<length-zombies; i++)
		elements[i+zombies]=vampire_array[i];

	delete[] zombie_array;
	delete[] vampire_array;
	return elements;
}

int *create_attack_plan(int N, int *elements, creature_counts counts) {

	// take the sorted array and add the summed attack powers
	// take care of the indices, this part will be a bit tricky
	// use debug prints if your have trouble with correct indexing
	// example: std::cout << "elements[i] = " << elements[i] << std::endl;
	int *attack_plan = new int [N+2];
	for(int i=0; i < counts.zombie_count; i++)
		attack_plan[i]=elements[i];
	attack_plan[counts.zombie_count]=counts.zombie_sum;
	for(int i=(counts.zombie_count)+1; i<N+1; i++)
		attack_plan[i]=elements[i];
	attack_plan[N+1]=counts.vampire_sum;
	return attack_plan;
}
