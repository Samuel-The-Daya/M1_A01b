#include <string>
#include <iostream>

#include "statsBar.hpp"
#include "TemplateFunctions.hpp"
#include <format>

void renderStat(const std::string& label, int current, int max) {

    renderStat(label, current, max, 20, '#', '_', true, false);

}

void renderStat(const std::string& label, double percent) {

    renderStat(label, percent * 100, 10000, 20, '#', '-', false, true);

}

void renderStat(const std::string& label, int current, int max,
    int width, char fill, char empty, bool showRatio,
    bool showPercentage) {

    std::string bar{" ["};

    current = tf::clamp(current, 0, max);

    for (auto i = 1; i < width + 1; i++) {

        if (tf::inRangeInclusive(i, 0, (int)round(((double)current / (double)max) * width))) {
            bar += fill;
        }
        else {
            bar += empty;
        }

    }

    bar.append("]");

    if (showRatio) bar += " " + std::to_string(current) + "/" + std::to_string(max);

    if (showPercentage) bar += " " + std::format("{:.1f}", (double)current / (double)max * 100) + "%";


    std::cout << label << bar;

}