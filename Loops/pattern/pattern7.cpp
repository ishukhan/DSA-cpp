#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    //     int row = 1;
    //     int toprint = 1;
    //     while (row <= n)
    //     {
    //         int col = 1;
    //         // int toprint = row;
    //         while (col <= row)
    //         {
    //             cout << toprint << " ";
    //             toprint++;
    //             col = col + 1;
    //         }
    //         cout << endl;
    //         row = row + 1;
    //     }
}