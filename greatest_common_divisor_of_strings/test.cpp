#include <iostream>
#include <string>
#include <cassert>
#include "solution.h"

using namespace std;

void runTestCases()
{
    Solution solution;

    assert(solution.gcdOfStrings("ABCABC", "ABC") == "ABC");

    assert(solution.gcdOfStrings("ABABAB", "ABAB") == "AB");

    assert(solution.gcdOfStrings("LEET", "CODE") == "");

    cout << "All test cases passed!" << endl;
}

int main()
{
    runTestCases();
    return 0;
}
