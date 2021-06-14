#include "fun.h"

#include <QDebug>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

Fun::Fun()
{
//    qDebug() << "A Fun object is created!";
}

// function that separates a 6-digit number and then multiplies each digit by 2 and then prints the number to the screen
void Fun::separator(long int input)
{
    int dig1, dig2, dig3, dig4, dig5, dig6, tempNum;

    dig1 = input / 100000;
    tempNum = input % 100000;
    dig1 *= 2;

    dig2 = tempNum / 10000;
    tempNum = tempNum % 10000;
    dig2 *= 2;

    dig3 = tempNum / 1000;
    tempNum = tempNum % 1000;
    dig3 *= 2;

    dig4 = tempNum / 100;
    tempNum = tempNum % 100;
    dig4 *= 2;

    dig5 = tempNum / 10;
    tempNum = tempNum % 10;
    dig5 *= 2;

    dig6 = tempNum / 1;
    dig6 *= 2;

    cout << dig1 << " " << dig2 << " " << dig3 << " "
         << dig4 << " " << dig5 << " " << dig6 << "\n\n";
}

// function to calculate two numbers present in a string according to the arithmetic operator from the string
int Fun::calculateExpression(string input)
{
    size_t position;        // stores the POSITION of the arithmetic operator from the string
    char mathoperator;      // stores the VALUE of the arithmetic operator

    // the arithmetic operator is a plus sign
    size_t additionPos = input.find("+");
    if(additionPos != string::npos)         // translated as "if the addition sign is not found in the string"
        position = additionPos;             // stores the position of the addition sign in our global data member, position

    // the arithmetic operator is a subtraction sign
    size_t subtractionPos = input.find("-");
    if(subtractionPos != string::npos)
        position = subtractionPos;

    // the arithmetic operator is a multiplication sign
    size_t multiplicationPos = input.find("*");
    if(multiplicationPos != string::npos)
        position = multiplicationPos;

    // the arithmetic operator is a division sign
    size_t divisionPos = input.find("/");
    if(divisionPos != string::npos)
        position = divisionPos;

    mathoperator = input.at(position);      // stores the value/character from the given position in the mathoperator data member

    string firstNum = input.substr(0,position);     // assigns firstNum the string at the given position
    int numOne = stoi(firstNum);                    // converts the string into an integer

    string secondNum = input.substr(position+1);
    int numTwo = stoi(secondNum);

    int result;
    switch(mathoperator)
    {
        case '+':
            result = numOne + numTwo;
            break;
        case '-':
            result = numOne - numTwo;
            break;
        case '*':
            result = numOne * numTwo;
            break;
        case '/':
            result = numOne / numTwo;
            break;
        default:
            cout << "Error! We couldn't solve your problem." << endl;
            break;
    }

    return result;
}

// function to calculate a number raised to an exponent
long int Fun::power(int base, int exponent)
{
    int answer = 1;

    if(base == 0)           // if base is 0, then answer will obviously be 0
        answer = 0;

    while(exponent != 0)    // continues multiplying the base number until the exponent decrements to 0
    {
        answer *= base;
        --exponent;
    }

    return answer;
}

// function to print a table that shows the square and cube values of a set of numbers
void Fun::printTable(long int value)
{
    cout << "Squares and Cubes up to: " << value << endl;

    int counter = 0;
    cout << "Number\t" << "Square\t" << "Cube\t\n";

    while(counter <= value)
    {
        // calls function power to find the sqaure and cubes of each pair of numbers
        cout << counter << "\t" << power(counter,2) << "\t" << power(counter,3) << "\n";
        counter++;
    }
    cout << endl;
}
