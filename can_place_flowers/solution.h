/*
You have a long flowerbed in which some of the plots are planted,
and some are not.
 However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's,
where 0 means empty and 1 means not empty,
and an integer n, return true if n new flowers can be planted in the flowerbed
without violating the no-adjacent-flowers rule and false otherwise.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int res = 0;

        for (int i = 0; i < flowerbed.size(); i++)
        {
            bool atTheFirstIndexCondition = (i == 0) || flowerbed[i - 1] == 0;

            bool atTheLastIndexCondition =
                (i == flowerbed.size() - 1) || flowerbed[i + 1] == 0;

            bool isCanBePlanted = flowerbed[i] == 0;

            if (isCanBePlanted && atTheFirstIndexCondition && atTheLastIndexCondition)
            {
                flowerbed[i] = 1;
                res++;
            }
        }

        return res >= n;
    }
};
