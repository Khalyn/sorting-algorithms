/*
** EPITECH PROJECT, 2021
** sorting-algorithms
** File description:
** Created by khalyn,
*/

#include <Time.hpp>

Time::Time(bool autoStart)
	: secondsCount(0),
	isRunning(autoStart),
	last(std::chrono::high_resolution_clock::now()) {}

double Time::get() noexcept {
	if (isRunning) {
		auto lNow = std::chrono::high_resolution_clock::now();
		secondsCount += (double)(lNow - last).count() / std::chrono::high_resolution_clock::period::den;
		last = lNow;
	}
	return secondsCount;
}

void Time::resume() noexcept {
	if (!isRunning) {
		isRunning = true;
		last = std::chrono::high_resolution_clock::now();
	}
}

void Time::pause() noexcept {
	if (isRunning) {
		isRunning = false;
		auto lNow = std::chrono::high_resolution_clock::now();
		secondsCount += (double)(lNow - last).count() / std::chrono::high_resolution_clock::period::den;
	}
}

void Time::reset(bool autoStop) noexcept {
	secondsCount = 0;
	if (autoStop) {
		isRunning = false;
	} else {
		this->resume();
	}
}


