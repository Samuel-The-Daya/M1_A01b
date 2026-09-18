#include <string>
#include <iostream>

//#include "statsBar.hpp"
#include "TemplateFunctions.hpp"
#include <format>

void renderStat(const std::string& label, int current, int max) {



}

void renderStat(const std::string& label, double percent) {



}

void renderStat(const std::string& label, int current, int max,
    int width, char fill, char empty, bool showRatio,
    bool showPercentage) {

    std::string bar{" ["};

    current = tf::clamp(current, 0, max);


    int amountFull{ (int)round(((double)current / (double)max) * width) };

    for (auto i = 1; i < width + 1; i++) {

        if (tf::inRangeInclusive(i, 0, amountFull)) {
            bar += fill;
        }
        else {
            bar += empty;
        }

    }

    bar.append("] ");

    if (showRatio) bar.append(current + "/" + max);

    double percent{ round(((double)current / (double)max) * 100) };

    if (showPercentage) bar += " " + std::format("{:.1f}", percent) + "%";


    std::cout << label << " " << bar;

}