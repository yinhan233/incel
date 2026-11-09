/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int j=0;
        int result=__INT32_MAX__;
        int sublength=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                sublength=(i-j+1);
                result=result<sublength?result:sublength;
                sum-=nums[j++];
            }
        }
        return result==__INT32_MAX__?0:result;
    }
};
// @lc code=end

