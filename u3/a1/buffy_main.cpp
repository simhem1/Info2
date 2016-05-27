#include "buffy_vampire_slayer.hpp"
#include <iostream>

using namespace std;

int main(void){
	int elements[]= {1, 3, 20, 14, 7, 5, 10, 12, 6, 2};
	int *sorted_array;
	int *attack_plan;
	creature_counts counts;
	std::cout << counts.zombie_count << '\n';
	std::cout << counts.vampire_count << '\n';
	std::cout << counts.zombie_sum << '\n';
	std::cout << counts.vampire_sum << '\n';
	sorted_array=sort(elements, 10);
	attack_plan = create_attack_plan(10, elements, counts);
	for(int i=0; i<10; i++)
		cout << sorted_array[i] << " ";
	cout << "\n";
	for(int i=0; i<10; i++)
		cout << attack_plan[i] << " ";
	return 0;
}
