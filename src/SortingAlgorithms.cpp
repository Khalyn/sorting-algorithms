/*
** EPITECH PROJECT, 2021
** sorting-algorithms
** File description:
** Created by khalyn,
*/

#include <iostream>
#include <SortingAlgorithms.hpp>
#include <unistd.h>
#include "TerminalDisplay.hpp"
#include "algo.hpp"
#include "Time.hpp"

void initializeDecreasingArray(std::vector<int> &array) {
	size_t size = array.size();
	for (size_t i = 0; i < size; i++) {
		array[i] = static_cast<int>(size - i);
	}
}

void SortingAlgorithms::start() {
	Time chrono;
	std::cout << "Hello ! Here is a algorithm tester." << std::endl;
	std::cout << "You can write a number which is the size of the tested vector, and see how many time each algorithm takes." << std::endl;
	std::cout << "Commands :\tquit\tstop the program" << std::endl;
	while (this->isContinue) {
		std::cout << term::lcyan << "<input min: 100 | max: 100000>: " << term::lgreen;
		std::string mystr;
		std::getline(std::cin, mystr);
		if (mystr == "quit") break;
		char* p;
		unsigned long i = std::strtoul(mystr.c_str(), &p, 10);
		if (*p) {
			std::cout << term::red << "<System>: '" << mystr << "' isn't a positive integer number or a valid command." << std::endl;
			continue;
		}
		if (i < 100) { i = 100; }
		else if (i > 100000) { i = 100000; }

		std::vector<int> array(i, 0);
		initializeDecreasingArray(array);
		std::cout << term::lblue << "<><><><> Sorting Algorithms: " << i << " elements <><><><>" << term::reset << std::endl;
		std::cout << term::yellow << "[.] Selection sort\t| executing..." << term::reset << std::flush;
		chrono.reset();
		chrono.resume();
		algo::selectionSort(array);
		chrono.pause();
		std::cout << term::lgreen << "\r\033[K[✔] Selection sort\t| "<< chrono.get() << "s" << term::reset << std::endl;
		initializeDecreasingArray(array);
		std::cout << term::yellow << "[.] Bubble sort\t\t| executing..." << std::flush;
		chrono.reset();
		algo::bubbleSort(array);
		chrono.pause();
		std::cout << term::lgreen << "\r\033[K[✔] Bubble sort\t\t| "<< chrono.get() << "s" << term::reset << std::endl;

		std::cout << term::lblue << "<><><><> Results analysis <><><><>" << term::reset << std::endl;
		std::cout << "Average time : ...s" << std::endl;
		std::cout << "Best time : ...s" << std::endl;
		std::cout << "Worst time : ...s" << std::endl;
		std::cout << std::endl;
	}
}


