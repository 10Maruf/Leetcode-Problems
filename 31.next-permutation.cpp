/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
        return nums;

    }
};
// @lc code=end

