#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    bool isPrimeNumber = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrimeNumber = 0;
            break;
        }
    }
    if (isPrimeNumber == 0)
    {
        cout << "Is Not a Prime Number" << endl;
    }
    else
    {
        cout << "Is a prime Number" << endl;
    }
}