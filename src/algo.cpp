/*
 * sorting-algorithms
*/

#include <cstdint>
#include "algo.hpp"

void algo::selectionSort(std::vector<int> &array) {
	for (size_t index = 0; index < (array.size() - 1); ++index) {
		size_t min_index = index;
		for (size_t i = index + 1; i < array.size(); ++i) {
			if (array[min_index] > array[i]) { min_index = i; }
		}
		if (min_index != index) {
			int element = array[index];
			array[index] = array[min_index];
			array[min_index] = element;
		}
	}
}

void algo::bubbleSort(std::vector<int> &array) {
	bool permute = true;
	while (permute) {
		permute = false;
		for (size_t index = 0; index < array.size() - 1; ++index) {
			if (array[index] > array[index + 1]) {
				permute = true;
				int element = array[index];
				array[index] = array[index + 1];
				array[index + 1] = element;
			}
		}
	}
}