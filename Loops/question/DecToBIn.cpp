#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        float bit = n & 1;
        /*The code you provided converts a decimal number to binary.
        However, there is an issue with using the pow function from the <math.h>
        library to calculate the value of each binary digit.
        The pow function works with floating-point numbers and can introduce inaccuracies when used with large exponents.*/
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}