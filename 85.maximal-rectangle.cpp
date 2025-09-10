/*
 * @lc app=leetcode id=85 lang=cpp
 *
 * [85] Maximal Rectangle
 */

// @lc code=start
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        stack<int> st;
        int maxArea = 0;   
        int m = matrix.size();
        if (m == 0) return 0;
        int n = matrix[0].size();
        vector<int> heights(n, 0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            st = stack<int>();
            for (int j = 0; j <= n; j++) {
                while (!st.empty() && (j == n || heights[st.top()] >= heights[j])) {
                    int height = heights[st.top()];
                    st.pop();
                    int width;
                    if (st.empty()) {
                        width = j;
                    } else {
                        width = j - st.top() - 1;
                    }
                    maxArea = max(maxArea, height * width);
                }
                st.push(j);
            }
        }
        return maxArea;
    }
};
// @lc code=end

