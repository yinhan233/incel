/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fast=0;
        int slow=0;
        while(fast<=nums.size()-1)
        {
            if(nums[fast]!=0&&nums[slow]==0)
            {
                nums[slow]=nums[fast];
                nums[fast]=0;
            }
            if(nums[slow]!=0)
            {
                slow++;
            }
            fast++;
        }
    }
};
// @lc code=end

