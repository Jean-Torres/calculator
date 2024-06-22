#include <iostream>
#include "calculator/sum.cpp"
#include "calculator/less.cpp"
#include "calculator/multiply.cpp"
#include "calculator/division.cpp"
using namespace std;

int main()
{
    Sum sum;
    Less less;
    Multiply multiply;
    Division division;
    int selected;

  while (selected != 5)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1: Sumar \n2: Restar \n3: Multiplicar \n4: Dividir \n5: salir\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\n:__ ";
        cin >> selected;

        switch (selected)
        {
            double number_one, number_two;
        case 1:
            cout << "Ingrese el numero uno a sumar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a sumar: ";
            cin >> number_two;
            cout << "El resultado de la suma es: " << sum.sum(number_one, number_two) << endl;
            break;
        case 2:
            cout << "Ingrese el numero uno a restar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a restar: ";
            cin >> number_two;
            cout << "El resultado de la resta es: " << less.less(number_one, number_two) << endl;
            break;
        case 3:
            cout << "Ingrese el numero uno a multiplicar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a multiplicar: ";
            cin >> number_two;
            cout << "El resultado de la multiplicacion es: " << multiply.multiply(number_one, number_two) << endl;
            break;
        case 4:
            cout << "Ingrese el numero uno a dividir: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a dividir: ";
            cin >> number_two;
            cout << "El resultado de la division es: " << division.division(number_one, number_two)[0] << " con un resto de: " << division.division(number_one, number_two)[1] << endl;
            break;
        default:
            break;
        }
    }

    while (selected != 5)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1: Sumar \n2: Restar \n3: Multiplicar \n4: Dividir \n5: salir\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\n:__ ";
        cin >> selected;

        switch (selected)
        {
            int number_one, number_two;
        case 1:
            cout << "Ingrese el numero uno a sumar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a sumar: ";
            cin >> number_two;
            cout << "El resultado de la suma es: " << sum.sum(number_one, number_two) << endl;
            break;
        case 2:
            cout << "Ingrese el numero uno a restar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a restar: ";
            cin >> number_two;
            cout << "El resultado de la resta es: " << less.less(number_one, number_two) << endl;
            break;
        case 3:
            cout << "Ingrese el numero uno a multiplicar: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a multiplicar: ";
            cin >> number_two;
            cout << "El resultado de la multiplicacion es: " << multiply.multiply(number_one, number_two) << endl;
            break;
        case 4:
            cout << "Ingrese el numero uno a dividir: ";
            cin >> number_one;
            cout << "Ingrese el numero dos a dividir: ";
            cin >> number_two;
            cout << "El resultado de la division es: " << division.division(number_one, number_two)[0] << " con un resto de: " << division.division(number_one, number_two)[1] << endl;
            break;
        default:
            break;
        }
    }

    cout << "\nFin del programa...\n";

    return 0;
}
