#include <iostream>
#include "tools.hpp"
using namespace std;

class Multiply
{
public:
    int multiply(int number_one, int number_two);
    double multiply(double number_one, double number_two);
    string multiply(int numerator_one, int denominator_one, int numerator_two, int denominator_two);
};

int Multiply::multiply(int number_one, int number_two)
{
    return number_one * number_two;
}

double Multiply::multiply(double number_one, double number_two)
{
    return number_one * number_two;
}

string Multiply::multiply(int numerator_one, int denominator_one, int numerator_two, int denominator_two)
{

    return simplifyFractions((numerator_one * numerator_two), (denominator_one * denominator_two));
}