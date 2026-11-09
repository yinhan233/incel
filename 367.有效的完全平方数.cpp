/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
        {
            return 1;
        }
        long long int start = 1;
        long long int end = num/2;
        while(start<=end)
        {
            long long int pow = (start+end)/2;
            if(pow*pow==num)
            {
                return true;
            }
            else if(pow*pow<num)
            {
                start=pow+1;
            }
            else{
                end=pow-1;
            }
        }
        return false;
    }
};
// @lc code=end

