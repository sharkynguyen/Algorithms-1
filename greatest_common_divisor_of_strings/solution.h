/*
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t
(i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2,
return the largest string x such that x divides both str1 and str2.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        // check the condition to return en unempty string
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }

        return str1.substr(0, __gcd(str1.size(), str2.size()));
    }

    int __gcd(int a, int b)
    {
        int res = min(a, b);

        while (res > 1)
        {
            if (a % res == 0 && b % res == 0)
            {
                return res;
            }

            res--;
        }

        return res;
    }
};
