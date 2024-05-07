#include "an.hpp"
#include <cmath>
#include <string>

using namespace std;

bool check(int n)
{
    string N = to_string(n);
    int counting = 0; string original_n = N; 
    bool is_armstrong = false; 

    for (int i = 0; i < N.length(); i++)
    {
        counting += pow(N[i] - '0', N.length());
    }
    string counted = to_string(counting);
    if (counted == original_n)
    {
        is_armstrong = true;
    }
    return is_armstrong;
}