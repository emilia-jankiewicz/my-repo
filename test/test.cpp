#include "../src/code.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> true_tests = {9, 0, 153, 9474};
    vector<int> false_tests = {10, 152, 11000};

    for (auto test : true_tests)
    {
        if(!check(test))
        {
            cerr << "Test failed for a number: " << test << endl;
            return 1;
        }
    }

    for (auto test : false_tests)
    {
        if(check(test))
        {
            cerr << "Test failed for a number: " << test << endl;
            return 1;
        }
    }

    cout << "All tests passed successfully" << endl;
    return 0;
}