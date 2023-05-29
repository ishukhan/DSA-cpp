#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 2;

    while (i < n)
    {
        /* code */
        if (n % i == 0)
        {

            cout << "prime number for " << i << endl;
        }
        else
        {
            cout << "Not for prime number " << i << endl;
        }
        i = i + 1;
    }
}