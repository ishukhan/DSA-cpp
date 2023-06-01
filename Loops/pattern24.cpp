#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // star print 1st tringle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // 2nd tringle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        // 3rd tringle
        int star = row - 1;
        while (star)
        {
            cout << star;
            star--;
        }

        cout << endl;
        row++;
    }
}