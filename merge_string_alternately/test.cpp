#include <iostream>
#include <string>
#include <cassert>
#include "solution.h"

using namespace std;

void runTestCases()
{
    Solution solution;

    // ex 1: Both word1 and word2 have the same length
    assert(solution.mergeAlternately("abc", "pqr") == "apbqcr");

    // ex 2: word2 is longer than word1
    assert(solution.mergeAlternately("ab", "pqrs") == "apbqrs");

    // ex 3: word1 is longer than word2
    assert(solution.mergeAlternately("abcd", "pq") == "apbqcd");

    cout << "All test cases passed!" << endl;
}

int main()
{
    runTestCases();
    return 0;
}
