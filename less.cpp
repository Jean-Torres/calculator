#include <iostream>
using namespace std;

class Less
{
public:
    int less(int number_one, int number_two);
    double less(double number_one, double number_two);
};

int Less::less(int number_one, int number_two)
{
    return number_one - number_two;
}

double Less::less(double number_one, double number_two)
{
    return number_one - number_two;
}