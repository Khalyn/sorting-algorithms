/*
** sorting-algorithms
*/

#include <iostream>
#include "SortingAlgorithms.hpp"

void	displayVector(const std::vector<int> &array) {
	std::cout << "Vector: ";
	for (const auto &elem : array) {
		std::cout << elem << ' ';
	}
	std::cout << std::endl;
}

int	main() {
	std::vector<int> array = {64, 25, 22, 12, 11};
	std::cout << "= Selection sort =" << std::endl;
	displayVector(array);
	algo::selectionSort(array);
	displayVector(array);
	array = {64, 25, 22, 12, 11};
	std::cout << "= Bubble sort =" << std::endl;
	displayVector(array);
	algo::bubbleSort(array);
	displayVector(array);
	return 0;
}