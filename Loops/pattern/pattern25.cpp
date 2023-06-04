#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        // part 1: number from 1 to n-i=1
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        j = 1;
        // part 2. star print (i-1)*2
        while (j <= (i - 1) * 2)
        {
            cout << "*"
                 << " ";
            j++;
        }
        // part 3. number form n-i+1 to i
        j = n - i + 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
    }
}