#include <iostream>
#include "code.hpp"

using namespace std;

int main()
{
    cout << "Check if a number is narcissistic. Enter an integere number: \n";
    int Number;
    cin >> Number;
    if (check(Number) == 1)
    {
        cout << "Number " << Number << " is a narcissistic number. \n";
    }
    else
    {
        cout << "Number " << Number << " is not a narcissistic number. \n";
    }
    return 0;
}
