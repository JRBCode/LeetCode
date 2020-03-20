/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target&&i!=j)
                {
                   a.push_back(i);
                   a.push_back(j);
                }
               
            }
        }
        return a;
    }
};
// @lc code=end

