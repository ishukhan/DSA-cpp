#include <iostream>
using namespace std;
// Function are set of code which performs something for you
// Function are used to modularise code
// Function are used to increase readability
// Function are used to use some code multiple times
// void --> which does not returns anything
// return
// parameterised
// non parameterised

// this is void funtion without any parameter
/*void printName()
{
    cout << "hey ishu" << endl;
}*/

// this funtion take parameter
/*void printName(string name)
{
    cout << "hey " + name << endl;
}*/

// Q. Take two number and print its sum;
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{
    /*  string name;
        cin >> name;
        printName(name);
    */
    int a, b;
    cin >> a >> b;
    int res = sum(a, b);
    cout << res;
    return 0;
}