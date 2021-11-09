// CAT 1 Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;
    cout << "Enter the value of temperature in Fahrenheit: ";
    cin >> fahrenheit;
    //Formula is Celsius = 5.0/9.0 * (Fahrenheit – 32.0) 
    celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    cout << "Temperature in Celsius: " << celsius;
    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
