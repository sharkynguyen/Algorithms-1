/*
There are n kids with candies. You are given an integer array candies,
where each candies[i] represents the number of candies the ith kid has,
and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if,
after giving the ith kid all the extraCandies,
they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(const vector<int> &candies, int extraCandies)
    {
        int maxCandy = candies[0];
        vector<bool> result;
        // find the greatest candy number
        for (int candy : candies)
        {
            maxCandy = candy > maxCandy ? candy : maxCandy;
        }

        // compare candy + extracandy
        for (int candy : candies)
        {
            bool comparation = (candy + extraCandies) >= maxCandy;

            result.push_back(comparation);
        }

        return result;
    }
};
