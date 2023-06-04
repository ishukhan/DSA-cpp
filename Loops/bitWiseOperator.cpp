#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    // AND OPERATOR
    cout << "a&b  " << (a & b) << endl;
    // OR OPERATOR
    cout << "a|b  " << (a | b) << endl;
    // NOT OPERATOR
    cout << "~a  " << ~a << endl;
    // XOR OPERATOR
    cout << "a^b  " << (a ^ b) << endl;

    // LEFT SHIFT OPERATOR
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    // RIGHT SWIFT OPERATOR
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    int i = 7;
    // pre increment
    cout << (++i) << endl;
    // 8
    // post increment
    cout << (i++) << endl;
    // 8 i=9
    // post increment
    cout << (i--) << endl;
    // 9 i=8
    // pre increment
    cout << (--i) << endl;
    // 7 i=7
}