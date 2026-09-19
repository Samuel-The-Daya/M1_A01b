#include <string>
#include <iostream>

#include "statsBar.hpp"
#include "TemplateFunctions.hpp"
#include <format>

/// <summary>
/// Renders a progress bar with a label and a ratio
/// </summary>
/// <param name="label"></param>
/// <param name="current"></param>
/// <param name="max"></param>
void renderStat(const std::string& label, int current, int max) {

    renderStat(label, current, max, 20, '#', '_', true, false);

}

/// <summary>
/// Renders a progress bar with a label and a percentage
/// </summary>
/// <param name="label"></param>
/// <param name="percent"></param>
void renderStat(const std::string& label, double percent) {

    renderStat(label, percent * 100, 10000, 20, '#', '-', false, true);

}

/// <summary>
/// Customizable progress bar.
/// Renders a progress bar with a label and optional ratio and label.
/// Can customize fill character and empty character
/// </summary>
/// <param name="label"></param>
/// <param name="current"></param>
/// <param name="max"></param>
/// <param name="width"></param>
/// <param name="fill"></param>
/// <param name="empty"></param>
/// <param name="showRatio"></param>
/// <param name="showPercentage"></param>
void renderStat(const std::string& label, int current, int max,
    int width, char fill, char empty, bool showRatio,
    bool showPercentage) {

    // Creates start of the bar
    std::string bar{" ["};

    // Clamps the current value to be within 0 and the maximum
    current = tf::clamp(current, 0, max);

    // For loop to add in the fill and empty character within the width
    // If the index is in range of the current, add to the string the fill character
    // If the index is out of range of the current, add to the string the empty character
    for (auto i = 1; i < width + 1; i++) {

        // Calculates what is within range by converting the current into a percentage multiplied by the width
        if (tf::inRangeInclusive(i, 0, (int)round(((double)current / (double)max) * width))) {
            bar += fill;
        }
        else {
            bar += empty;
        }

    }

    // Closes the bar
    bar.append("]");

    // Optional setting, if the ratio should be displayed, display a ratio
    if (showRatio) bar += " " + std::to_string(current) + "/" + std::to_string(max);

    // Optional setting, if the percent should be displayed, display a percentage
    if (showPercentage) bar += " " + std::format("{:.1f}", (double)current / (double)max * 100) + "%";

    // Prints out the completed bar with the label in the beginning
    std::cout << label << bar;

}