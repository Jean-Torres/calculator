#include <iostream>
#include <vector>
using namespace std;

class Division
{
public:
    std::vector<int> division(int number_one, int number_two);
};

std::vector<int> Division::division(int number_one, int number_two)
{
    int quotient = 1;
    bool find = false;

    if (number_two == 0) throw "Division by zero is undefined";

    while (!find)
    {
        if (quotient * number_two == number_one)
        {
            break;
        }

        if (quotient * number_two < number_one)
        {
            quotient++;
        }

        if (quotient * number_two > number_one)
        {
            quotient--;
            break;
        }
    }
    return {quotient, number_one - number_two * quotient};
}
