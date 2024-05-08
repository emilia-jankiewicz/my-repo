#include <iostream>
#include "code.hpp"

using namespace std;

int main()
{
    cout << "Check if a positive number is narcissistic. Enter a positive integer: \n";
    long Number;
    cin >> Number;
    if (Number < 0)
    {
        cout << "You've enetered a negative number. Number must be a positive integer. \n";
    }
    else
    {
        if (check(Number) == 1)
        {
            cout << "Number " << Number << " is a narcissistic number. \n";
        }
        else
        {
            cout << "Number " << Number << " is not a narcissistic number. \n";
        } 
    }
    return 0;
}
