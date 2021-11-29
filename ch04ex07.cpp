#include <iostream>
#include "ch04ex07.h"

using namespace std;
using namespace ch04ex07;

int main() {
    //  Input.
    int x = Scanner::GetInt();
    char op = Scanner::GetChar();
    int y = Scanner::GetInt();
    //  Arithmetic.
    double result = DoArithmetic(x, op, y);
    //  PrintDouble result.
    PrintDouble(result);

    return 0;
}


int ch04ex07::Scanner::GetInt() {
    //  Input.
    string s;
    cin >> s;
    //  If input is a digit, return it.
    if (s == "0" || s == "zero" || s == "Zero")
        return 0;
    if (s == "1" || s == "one" || s == "One")
        return 1;
    if (s == "2" || s == "two" || s == "Two")
        return 2;
    if (s == "3" || s == "three" || s == "Three")
        return 3;
    if (s == "4" || s == "four" || s == "Four")
        return 4;
    if (s == "5" || s == "five" || s == "Five")
        return 5;
    if (s == "6" || s == "six" || s == "Six")
        return 6;
    if (s == "7" || s == "seven" || s == "Seven")
        return 7;
    if (s == "8" || s == "eight" || s == "Eight")
        return 8;
    if (s == "9" || s == "nine" || s == "Nine")
        return 9;
    cout << "Input not a valid single digit integer." << endl;
    return -1;
}

char ch04ex07::Scanner::GetChar() {
    char c;
    cin >> c;
    return c;
}

double ch04ex07::DoArithmetic(double x, char op, double y) {
    double result = 0.0;
    switch (op) {
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
    }
    return result;
}

void ch04ex07::PrintDouble(double d) {
    cout << d << endl;
}
