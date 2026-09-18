#pragma once

//Template Functions

namespace tf {

	template<typename T>
	bool inRangeInclusive(T value, T low, T high) {

		return value >= low && value <= high;

	}

	template<typename T>
	T clamp(T value, T low, T high) {

		return (value > high) ? high : (value < low) ? low : value;

	}

}