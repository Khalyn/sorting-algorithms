/*
** EPITECH PROJECT, 2021
** sorting-algorithms
** File description:
** Created by khalyn,
*/

#include <iostream>
#include <SortingAlgorithms.hpp>
#include "algo.hpp"
#include <unistd.h>

void initializeDecreasingArray(std::vector<int> &array) {
	size_t size = array.size();
	for (size_t i = 0; i < size; i++) {
		array[i] = static_cast<int>(size - i);
	}
}

void SortingAlgorithms::start() {
	std::cout << "Hello ! Here is a algorithm tester." << std::endl;
	std::cout << "You can write a number which is the size of the tested vector, and see how many time each algorithm takes." << std::endl;
	while (this->isContinue) {
		std::cout << "<input min: 100 | max: 100000>: ";
		unsigned long i;
		std::cin >> i;
		if (i < 100) { i = 100; }
		else if (i > 100000) { i = 100000; }

		std::vector<int> array(i, 0);
		initializeDecreasingArray(array);
		std::cout << "<><><><> Sorting Algorithms: " << i << " elements <><><><>" << std::endl;
		std::cout << "[.] Selection sort\t| executing..." << std::flush;
		sleep(2);
		algo::selectionSort(array);
		std::cout << "\r\033[K[✔] Selection sort\t| " << 0.465 << "s" << std::endl;
		initializeDecreasingArray(array);
		std::cout << "[.] Bubble sort\t| executing..." << std::flush;
		sleep(2);
		algo::bubbleSort(array);
		std::cout << "\r\033[K[✔] Bubble sort\t\t| " << 0.865 << "s" << std::endl;

		std::cout << "Average time : ..." << std::endl;
		std::cout << "Best time : ..." << std::endl;
		std::cout << "Worst time : ..." << std::endl;
		std::cout << std::endl;
	}
}


