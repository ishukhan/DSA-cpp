#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // star print kardo
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << row;
            star--;
        }

        int col = 1;
        while (col <= row)
        {

            col++;
        }
        cout << endl;
        row++;
    }
}