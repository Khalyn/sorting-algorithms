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
	displayVector(array);
	sort::selection(array);
	displayVector(array);
	return 0;
}