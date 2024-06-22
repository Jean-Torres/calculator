#include <iostream>
using namespace std;

class Multiply
{
public:
    int multiply(int number_one, int number_two);
};

int Multiply::multiply(int number_one, int number_two)
{
    return number_one * number_two;
}