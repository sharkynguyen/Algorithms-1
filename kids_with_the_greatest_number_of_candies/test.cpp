#include <iostream>
#include <cassert>
#include "solution.h"

using namespace std;

void runTestCases()
{
    Solution solution;

    assert((solution.kidsWithCandies({2, 3, 5, 1, 3}, 3) == std::vector<bool>{true, true, true, false, true}));

    assert((solution.kidsWithCandies({4, 2, 1, 1, 2}, 1) == std::vector<bool>{true, false, false, false, false}));

    assert((solution.kidsWithCandies({12, 1, 12}, 10) == std::vector<bool>{true, false, true}));

    cout << "All test cases passed!" << endl;
}

int main()
{
    runTestCases();
    return 0;
}
