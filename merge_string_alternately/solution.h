/*
You are given two strings word1 and word2.
Merge the strings by adding letters in alternating order, starting with word1.
If a string is longer than the other,
append the additional letters onto the end of the merged string.

Return the merged string.
*/

#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        // declare the result merged string
        string mergedString = "";

        // init the indexes
        int i = 0, j = 0;

        while (i < word1.size() && j < word2.size())
        {
            mergedString += word1[i++];
            mergedString += word2[j++];
        }

        // append the additional letters onto the end of th merged string

        mergedString.append(word1.substr(i));
        mergedString.append(word2.substr(j));

        return mergedString;
    }
};
