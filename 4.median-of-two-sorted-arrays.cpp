/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums2.size() < nums1.size())
        {
            return findMedianSortedArrays(nums2, nums1);
        }
        int n = nums2.size(), m = nums1.size();
        int start = 0, end = m;
        while (start <= end)
        {
            int part1 = (start + end) / 2;
            int part2 = (m + n + 1) / 2 - part1;
            int maxleftnums1;
            if (part1 == 0)

                maxleftnums1 = INT_MIN;

            else

                maxleftnums1 = nums1[part1 - 1];
            int maxleftnums2;
            if (part2 == 0)

                maxleftnums2 = INT_MIN;

            else

                maxleftnums2 = nums2[part2 - 1];
            int minrightnums1;
            if (part1 == m)

                minrightnums1 = INT_MAX;

            else

                minrightnums1 = nums1[part1];
            int minrightnums2;
            if (part2 == n)
                minrightnums2 = INT_MAX;

            else

                minrightnums2 = nums2[part2];
            if (maxleftnums1 <= minrightnums2 && maxleftnums2 <= minrightnums1)
            {
                if ((m + n) % 2 == 0)
                {
                    return (max(maxleftnums1, maxleftnums2) + min(minrightnums1, minrightnums2)) / 2.0;
                }
                else
                {
                    return max(maxleftnums1, maxleftnums2);
                }
            }
            else if (maxleftnums1 > minrightnums2)
            {
                end = part1 - 1;
            }
            else
            {
                start = part1 + 1;
            }

        }
        
        return 0.0;
    }
};
// @lc code=end
