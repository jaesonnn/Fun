#include <iostream>
using namespace std;

#include "fun.h"

int main()
{
    Fun funObj;                 // creates a Fun object called funObj

    long int number;            // this number will be passed to function separator
    cout << "Hello, please enter a six digit number: ";
    cin >> number;

    /* function separator had an integer parameter making it necessary for us to pass in an integer when we call it.
     * Failing to pass in an integer will result in a compilation error. */
    funObj.separator(number);   // calling funcion separator

    cout << "Calling function calculateExpression(\"520+9\")" << endl;
    cout << "Correct answer is: 529" << endl;
    int answer = funObj.calculateExpression("520+9");
    cout << "Your answer is: " << answer << endl << endl;

    cout << "Calling function calculateExpression(\"19*127\")" << endl;
    cout << "Correct answer is: 2143" << endl;
    int answer2 = funObj.calculateExpression("19*127");
    cout << "Your answer is: " << answer2 << endl << endl;

    cout << "Calling function calculateExpression(\"234-8125\")" << endl;
    cout << "Correct answer is: -7891" << endl;
    int answer3 = funObj.calculateExpression("234-8125");
    cout << "Your answer is: " << answer3 << endl << endl;

    /* function power was declared with two integer parameters.  This means we must pass in both integers when we call
     * this function otherwise we will end up with a compilation error.  Since power returns a value, we must declare a
     * variable that it will be assigned.  Variable result will receive what is returned by the function. */
    long int result;
    int base, exponent;

    // first expression
    cout << "Please enter a base: ";
    cin >> base;
    cout << "Please enter an exponent: ";
    cin >> exponent;

    result = funObj.power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << "\n\n";

    // second expression
    cout << "Please enter a base: ";
    cin >> base;
    cout << "Please enter an exponent: ";
    cin >> exponent;

    result = funObj.power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << "\n\n";

    funObj.printTable(3);   // calling function printTable
    funObj.printTable(5);   // calling function printTable
    funObj.printTable(10);   // calling function printTable

    return 0;
}
