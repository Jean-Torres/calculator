#include <iostream>

class Sum{
    public:
        int sum(int number_one, int number_two);
        double sum(double number_one, double number_two);
};

int Sum::sum(int number_one, int number_two){
    return number_one + number_two;
}

double Sum::sum(double number_one, double number_two){
    return number_one + number_two;
}