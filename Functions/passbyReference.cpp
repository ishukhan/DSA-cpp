#include <iostream>
using namespace std;

/*
 Passing by by reference refers to a method of passing the address of an argument
 in the calling function to a corresponding parameter in the called function.
 */
void doSomething(string &s)
{
    s[0] = 't';
    cout << s << endl;
}

int main()
{
    string s = "raj";
    doSomething(s);
    cout << s;
}