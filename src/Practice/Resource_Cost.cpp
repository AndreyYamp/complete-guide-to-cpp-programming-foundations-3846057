// C++ implementation​​​​​​‌‌​‌​​​‌‌‌‌​​​​‌‌​​​‌‌​‌‌ below
#include <iostream>
#include <cstdint>
#include <vector>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
//#define showExpectedResult
//#define showHints

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

const double basic_tax = 1.05;
const double luxury_tax = 1.15;
const double essential_tax = 1.0;

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;

    // Write your code here
    for (auto x : resources){
        switch(x.type){
            case 'B':
                result += x.baseCost * basic_tax;
                break;
            case 'L':
                result += x.baseCost * luxury_tax;
                break;
            case 'E':
                result += x.baseCost * essential_tax;
                break;
            default:
                result += x.baseCost * essential_tax;
                break;
        }
    }

    std::cout << "The total cost of all resources: " << result << std::endl;
    
    return result;
}