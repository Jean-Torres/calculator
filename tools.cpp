#include <iostream>
#include "tools.hpp"
using namespace std;

string simplifyFractions(int numerator, int denominator)
{
    bool simplify = true;
    int multiply = 2;
    while (simplify)
    {
        if (multiply > numerator || multiply > denominator)
            break;
        if (numerator % multiply == 0 && denominator % multiply == 0)
        {
            numerator = numerator / multiply;
            denominator = denominator / multiply;
        }
        else
        {
            multiply++;
        }
    }

    return std::to_string(numerator) +"/"+ std::to_string(denominator);
}