#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number you wants Fibonacci series" << endl;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << "Here a Fibonacci Series 0 to " << n << " !" << endl;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}