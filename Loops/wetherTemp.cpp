#include <iostream>
using namespace std;
int main()
{

    cout << "------------------WELCOME TO THE CONVERT TEMPERATURE------------------" << endl;
    float fer;
    float cel;
    int choose;
    
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << endl;
    cout << "---------------------Choose Option-----------------------" << endl;
    cin >> choose;
    if (choose == 1)
    {
        cout << "------------------Celsius to Fahrenheit------------------" << endl;
        cout << "\n"
             << endl;
        float c;
        cout << "Enter the Value -: ";
        cin >> c;
        fer = (c * 9 / 5) + 32;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Today Temperature is " << fer << " Fahrenheit. " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;
        cout << "Do you want to know how is the weather today ?" << endl;
        char yes;
        cout << "1. yes" << endl;
        cout << "2. Exit" << endl;
        cout << "* Please Enter the First Letter of Optaion" << endl;
        cin >> yes;
        if (yes == 'y')
        {

            if (fer >= 50 && fer <= 100)
            {
                cout << "The Weather is very nice today :-)" << endl;
            }
            else if (fer >= 100 && fer <= 134)
            {
                cout << "Today the weather is very hot keep yourself hydrated :-)" << endl;
            }
            else if (fer >= 30 && fer <= 50)
            {
                cout << "It may rain today,please take an umbrella and leave the house " << endl;
            }
        }
        else if (yes == 'e')
        {
            cout << "################## Thanks to use this ##############" << endl;
        }
    }
    else if (choose == 2)
    {
        cout << "------------------Fahrenheit to Celsius------------------" << endl;
        cout << endl;
        float f;
        cout << "Enter the value :- ";
        cin >> f;
        cel = (f - 32) * 5 / 9;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Today Temperature is " << cel << " Celsius. " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << endl;
        cout << "Do you want to know how is the weather today ?" << endl;
        char yes;
        cout << "1. yes" << endl;
        cout << "2. Exit" << endl;
        cout << "* Please Enter the First Letter of Optaion" << endl;
        cin >> yes;
        if (yes == 'y')
        {

            if (cel >= 20 && cel <= 35)
            {
                cout << "The Weather is very nice today :-)" << endl;
            }
            else if (cel >= 35 && cel <= 60)
            {
                cout << "Today the weather is very hot keep yourself hydrated :-)" << endl;
            }
            else if (cel >= 15 && cel <= 19)
            {
                cout << "It may rain today,please take an umbrella and leave the house " << endl;
            }
        }
        else if (yes == 'e')
        {
            cout << "################## Thanks to use this ##############" << endl;
        }
    }
    int a;
    cout << "\n";
    cout << "Enter any key for exit";
    cin >> a;
}
