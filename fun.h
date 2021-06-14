#ifndef FUN_H
#define FUN_H

#include <iostream>
using namespace std;

class Fun
{
public:
    Fun();
    void separator(long int input);
    int calculateExpression(string input);
    long int power(int base, int exponent);
    void printTable(long int value);
};

#endif // FUN_H
