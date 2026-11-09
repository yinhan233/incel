/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    int findFirst(const vector<int>& a, int t)
    {
        int l = 0, r = (int)a.size() - 1, ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (a[m] == t) {
                ans = m;
                r = m - 1;
            } else if (a[m] < t) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return ans;
    }
    int findLast(const vector<int>& a, int t)
    {
        int l = 0, r = (int)a.size() - 1, ans = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (a[m] == t) {
                ans = m;
                l = m + 1;
            } else if (a[m] < t) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int left = findFirst(nums, target);
        int right = findLast(nums, target);
        return vector<int> { left, right };
    }
};
// @lc code=end
