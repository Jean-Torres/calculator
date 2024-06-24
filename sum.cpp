#include <iostream>
using namespace std;

class Sum
{
public:
    int sum(int number_one, int number_two);
    double sum(double number_one, double number_two);
    string sum(int numerator_one, int denominator_one, int numerator_two, int denominator_two);
};

int Sum::sum(int number_one, int number_two)
{
    return number_one + number_two;
}

double Sum::sum(double number_one, double number_two)
{
    return number_one + number_two;
}

string Sum::sum(int numerator_one, int denominator_one, int numerator_two, int denominator_two)
{

    int denominator = denominator_one != denominator_two ? denominator_one * denominator_two : denominator_one;

    int res_one = (denominator / denominator_one) * numerator_one;
    int res_two = (denominator / denominator_two) * numerator_two;

    return std::to_string(res_one + res_two )+ "/" + std::to_string(denominator);
}