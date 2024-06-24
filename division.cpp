#include <iostream>
#include <vector>
using namespace std;

class Division
{
public:
    std::vector<int> division(int number_one, int number_two);
    std::vector<double> division(double number_one, double
                                                        number_two);
    string division(int numerator_one, int denominator_one, int numerator_two, int denominator_two);
};

std::vector<int> Division::division(int number_one, int number_two)
{
    int quotient = 1;
    bool find = false;

    if (number_two == 0)
        throw "Division by zero is undefined";

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

std::vector<double> Division::division(double number_one, double number_two)
{
    int quotient = 1;
    bool find = false;

    if (number_two == 0)
        throw "Division by zero is undefined";

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

    return {quotient * 1.0, number_one / number_two - quotient};
}

string Division::division(int numerator_one, int denominator_one, int numerator_two, int denominator_two)
{

    return std::to_string(numerator_one * denominator_two) + "/" + std::to_string(denominator_one * numerator_two);
}
