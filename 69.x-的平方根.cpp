/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x)
    {
        int start = 0, end = x, ans = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long sq = (long long)mid * mid;
            if (sq == x)
                return mid;
            if (sq < x) {
                ans = mid;
                start = mid + 1;
            } else
                end = mid - 1;
        }
        return ans;
    }
};
// @lc code=end
