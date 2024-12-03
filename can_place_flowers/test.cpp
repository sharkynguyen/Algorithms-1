#include <iostream>
#include <string>
#include <cassert>
#include "solution.h"

using namespace std;

void runTestCases()
{
    Solution solution;

    assert(solution.canPlaceFlowers([ 1, 0, 0, 0, 1 ], 1) == true);

    assert(solution.canPlaceFlowers([ 1, 0, 0, 0, 1 ], 2) == false);

    cout << "All test cases passed!" << endl;
}

int main()
{
    runTestCases();
    return 0;
}
