#pragma once
#include <string>

/// <summary>
/// Grabs input from player & prints prompt.
/// Checks for integer
/// </summary>
/// <param name=prompt></param>
/// <returns>int</returns>
int fetchNumber(std::string);

/// <summary>
/// Grabs input from player & prints prompt
/// Checks for Y or N
/// </summary>
/// <param name=prompt></param>
/// <returns>bool</returns>
bool fetchYesOrNo(std::string);