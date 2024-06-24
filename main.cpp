/*Este main esta escrito para correr por fuera de la carpeta que lo contiene,
    es decir elimine el "calculator/" si lo va a ejecutar al mismo nivel de los demas archivos*/

#include <iostream>
#include "calculator/sum.cpp"
#include "calculator/less.cpp"
#include "calculator/multiply.cpp"
#include "calculator/division.cpp"
#include "calculator/tools.cpp"
using namespace std;

int menu()
{
    int selected;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "1: Sumar \n2: Restar \n3: Multiplicar \n4: Dividir \n5: salir\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\n:__ ";
    cin >> selected;

    return selected;
}

int main()
{
    Sum sum;
    Less less;
    Multiply multiply;
    Division division;
    int selected, operation_selected;

    cout << "Calculadora Básica.\n";

    while (operation_selected != 5)
    {
        selected = 0;
        cout << "\nSeleccione la opción con la que desea trabajar.\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1: Enteros \n2: Decimales \n3: Fracciones \n4: salir\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~Menú~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\n:__ ";
        cin >> operation_selected;

        if (operation_selected == 1)
        {
            while (selected != 5)
            {
                selected = menu();

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
                    cout << "¡UP! Opción no disponible, vuelve a intentar.\n";
                    break;
                }
            }
        }
        else if (operation_selected == 2)
        {
            while (selected != 5)
            {
                selected = menu();

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
                case 5:
                    break;
                default:
                    cout << "¡UP! Opción no disponible, vuelve a intentar.\n";
                    break;
                }
            }
        }
        else if (operation_selected == 3)
        {

            while (selected != 5)
            {
                selected = menu();

                switch (selected)
                {
                    int numerator_one, numerator_two, denominator_one, denominator_two;
                case 1:
                    cout << "Ingrese el numerador uno a sumar: ";
                    cin >> numerator_one;
                    cout << "Ingrese el denominador uno a sumar: ";
                    cin >> denominator_one;
                    cout << "Ingrese el numerador dos a sumar: ";
                    cin >> numerator_two;
                    cout << "Ingrese el denominador dos a sumar: ";
                    cin >> denominator_two;
                    cout << "El resultado de la suma de fracción es: " << sum.sum(numerator_one, denominator_one, numerator_two, denominator_two) << endl;
                    break;
                case 2:
                    cout << "Ingrese el numerador uno a sumar: ";
                    cin >> numerator_one;
                    cout << "Ingrese el denominador uno a sumar: ";
                    cin >> denominator_one;
                    cout << "Ingrese el numerador dos a sumar: ";
                    cin >> numerator_two;
                    cout << "Ingrese el denominador dos a sumar: ";
                    cin >> denominator_two;
                    cout << "El resultado de la resta de fracción es: " << less.less(numerator_one, denominator_one, numerator_two, denominator_two) << endl;
                    break;
                case 3:
                    cout << "Ingrese el numerador uno a sumar: ";
                    cin >> numerator_one;
                    cout << "Ingrese el denominador uno a sumar: ";
                    cin >> denominator_one;
                    cout << "Ingrese el numerador dos a sumar: ";
                    cin >> numerator_two;
                    cout << "Ingrese el denominador dos a sumar: ";
                    cin >> denominator_two;
                    cout << "El resultado de la multiplicación de fracción es: " << multiply.multiply(numerator_one, denominator_one, numerator_two, denominator_two) << endl;
                    break;
                case 4:
                    cout << "Ingrese el numerador uno a sumar: ";
                    cin >> numerator_one;
                    cout << "Ingrese el denominador uno a sumar: ";
                    cin >> denominator_one;
                    cout << "Ingrese el numerador dos a sumar: ";
                    cin >> numerator_two;
                    cout << "Ingrese el denominador dos a sumar: ";
                    cin >> denominator_two;
                    cout << "El resultado de la división de fracción es: " << division.division(numerator_one, denominator_one, numerator_two, denominator_two) << endl;
                    break;
                default:
                    cout << "¡UP! Opción no disponible, vuelve a intentar.\n";
                    break;
                }
            }
        }
        else if (operation_selected == 4)
        {
            break;
        }
        else
        {
            cout << "¡UP! Opción no disponible, vuelve a intentar.\n";
        }
    }

    cout << "\nFin del programa...\n";

    return 0;
}