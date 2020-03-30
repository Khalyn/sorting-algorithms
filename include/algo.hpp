/*
** sorting-algorithms
*/

#ifndef PROJET_SORTINGALGORITHMS_HPP
#define PROJET_SORTINGALGORITHMS_HPP

#include <iostream>
#include <type_traits>
#include "vector"
#include "array"

namespace algo {
	template<typename T>
	void	swap(T *x, T *y) noexcept {
		T element = *x;
		*x = *y;
		*y = element;
	}

	template<typename T>
	void	selectionSort(std::vector<T> &vector) noexcept {
		auto size = vector.size();
		using Index = decltype(size);

		for (Index i = 0; i < (size - 1); ++i) {
			Index min = i;
			for (Index j = i + 1; j < size; ++j) {
				[[unlikely]] if(vector[min] > vector[j]) {
					min = j;
				}
			}
			[[likely]] if (min != i) {
				swap(&vector[i], &vector[min]);
			}
		}
	}

	template <typename T>
	void	bubbleSort(std::vector<T> &vector) noexcept {
		auto size = vector.size();
		using Index = decltype(size);

		bool permute = true;
		while (permute) {
			permute = false;
			for (Index i = 0; i < size - 1; ++i) {
				if (vector[i] > vector[i + 1]) {
					permute = true;
					swap(&vector[i], &vector[i + 1]);
				}
			}
		}
	}
}

#endif //PROJET_SORTINGALGORITHMS_HPP
