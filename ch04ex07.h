/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alex Fowler
 */

#ifndef FOWLER_COP3330_CH04_EX07_CH04EX07_H
#define FOWLER_COP3330_CH04_EX07_CH04EX07_H

using namespace std;

namespace ch04ex07
{
    class Scanner
    {
    public:
        static int GetInt();
        static char GetChar();
    };
    double DoArithmetic(double x, char op, double y);
    static void PrintDouble(double d);
}


#endif //FOWLER_COP3330_CH04_EX07_CH04EX07_H
