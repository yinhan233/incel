/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[pos] = nums[left] * nums[left];
                ++left;
            } else {
                result[pos] = nums[right] * nums[right];
                --right;
            }
            --pos;
        }

        return result;
    }
};
// @lc code=end

