class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int m  = -1;
        int r = heights.size() - 1;
        while(l < r) {
            int mini = min(heights[l], heights[r]);
            int curr = (r-l)*mini;
            m = max(m,curr);
            (mini == heights[l])? l++ : r--;
        }
        return m;
    }
};
