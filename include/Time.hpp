/*
** sorting-algorithms
*/

#ifndef CHRONO_HPP_
#define CHRONO_HPP_
#include <chrono>

class Time
{
public:
	explicit Time(bool autoStart = false);

	double get() noexcept;
	void resume() noexcept;
	void pause() noexcept;
	void reset(bool autoStop = false) noexcept;

private:
	double secondsCount;
	bool isRunning;
	std::chrono::time_point<std::chrono::high_resolution_clock> last;
};

#endif // CHRONO_HPP_
