// TUIStatsBar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "statsBar.hpp"

int main()
{

    // Test of all the overloads of renderStat


    std::cout << "Hello World!\n";

    std::cout << "First overload of renderStat\n";

    renderStat("HP", 100, 200);

    std::cout << "\nSecond overload of renderStat\n";

    renderStat("Charge", 12.5);

    std::cout << "\nMain implementation of renderStat\n";

    renderStat("Apple Power", 10, 20, 10, '*', '_', false, true);

}
