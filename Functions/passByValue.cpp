#include <iostream>
using namespace std;

// Pass by Value, means that a copy of the data is made and stored by way of the name of the parameter.
void doSomething(string s)
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