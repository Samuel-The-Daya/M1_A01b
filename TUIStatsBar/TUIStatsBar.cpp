// TUIStatsBar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "statsBar.hpp"

int main()
{
    std::cout << "Hello World!\n";

    std::cout << "\n";

    renderStat("HP", 100, 200);

    std::cout << "\n\n";

    renderStat("Charge", 12.5);

    std::cout << "\n\n";

    renderStat("Apple Power", 10, 20, 10, '*', '_', false, true);

}
