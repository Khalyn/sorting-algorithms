/*
** EPITECH PROJECT, 2021
** sorting-algorithms
** File description:
** Created by khalyn,
*/

#ifndef SORTING_ALGORITHMS_TERMINALDISPLAY_HPP
#define SORTING_ALGORITHMS_TERMINALDISPLAY_HPP

#include <cstdint>

namespace term {
	constexpr char red[] = "\x1B[31m";
	constexpr char green[] = "\x1B[32m";
	constexpr char yellow[] = "\x1B[33m";
	constexpr char blue[] = "\x1B[34m";
	constexpr char magenta[] = "\x1B[35m";
	constexpr char cyan[] = "\x1B[36m";
	constexpr char grey[] = "\x1B[37m";

	constexpr char dgrey[] = "\x1B[90m";
	constexpr char lred[] = "\x1B[91m";
	constexpr char lgreen[] = "\x1B[92m";
	constexpr char lyellow[] = "\x1B[93m";
	constexpr char lblue[] = "\x1B[94m";
	constexpr char lmagenta[] = "\x1B[95m";
	constexpr char lcyan[] = "\x1B[96m";
	constexpr char white[] = "\x1B[97m";

	constexpr char reset[] = "\x1B[0m";
}

#endif //SORTING_ALGORITHMS_TERMINALDISPLAY_HPP
