class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto e : nums) st.insert(e);
        int ans = 0;
        int max = 0;
        for(auto e : st) {
            if(!st.contains(e-1)) {
                for(int i = e;; i++) {
                    if(st.contains(i)) ans++;
                    else break;
                }
                if(ans > max) max = ans;
                ans = 0;
            }
        }
        return max;
    }
};
