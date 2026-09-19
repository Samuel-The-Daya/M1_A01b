#pragma once

//Template Functions

namespace tf {

	/// <summary>
	/// Checks if passed value is within the passed minimum and maximum.
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="value"></param>
	/// <param name="low"></param>
	/// <param name="high"></param>
	/// <returns></returns>
	template<typename T>
	bool inRangeInclusive(T value, T low, T high) {

		return value >= low && value <= high;

	}

	/// <summary>
	/// Returns value within the passed minimum and maximum
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="value"></param>
	/// <param name="low"></param>
	/// <param name="high"></param>
	/// <returns></returns>
	template<typename T>
	T clamp(T value, T low, T high) {

		return (value > high) ? high : (value < low) ? low : value;

	}

}