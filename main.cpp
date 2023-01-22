//  THE MAX MOD FIVE PROBLEM
//  Given two int values, print whichever value is larger.
//  However, if the two values have the same remainder when divided by 5,
//  then the print the smaller value.
//  However, in all cases, if the two values are the same, print 0.

// • inputof2,3 →3
// • inputof6,2 →6
// • inputof3,2 →3

#include <iostream>
using namespace std;

int maxMod(int a, int b)
{
    int result;
    if (a == b)
        result = 0;
    else if (a % 5 == b % 5)
    {
        if (a > b)
            result = b;
        else
            result = a;
    }
    else
    {
        if (a > b)
            result = a;
        else
            result = b;
    }
    return result;
}

int main()
{

    cout << "Testing maxMod(2 , 3): " << maxMod(2, 3) << endl;
    cout << "Testing maxMod(6, 2): " << maxMod(6, 2) << endl;
    cout << "Testing maxMod(3, 2): " << maxMod(3, 2) << endl;
    cout << "Testing maxMod(2, 6): " << maxMod(2, 6) << endl;
    cout << "Testing maxMod(10, 5): " << maxMod(10, 5) << endl;
    cout << "Testing maxMod(25, 20): " << maxMod(25, 20) << endl;
    cout << "Testing maxMod(27, 25): " << maxMod(27, 25) << endl;
    return 0;
}