#include <iostream>
using namespace std;

class Less
{
public:
    int less(int number_one, int number_two);
    double less(double number_one, double number_two);
    string less(int numerator_one, int denominator_one, int numerator_two, int denominator_two);
};

int Less::less(int number_one, int number_two)
{
    return number_one - number_two;
}

double Less::less(double number_one, double number_two)
{
    return number_one - number_two;
}

string Less::less(int numerator_one, int denominator_one, int numerator_two, int denominator_two)
{

    int denominator = denominator_one != denominator_two ? denominator_one * denominator_two : denominator_one;

    int res_one = (denominator / denominator_one) * numerator_one;
    int res_two = (denominator / denominator_two) * numerator_two;

    return std::to_string(res_one - res_two )+ "/" + std::to_string(denominator);
}