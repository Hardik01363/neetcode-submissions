class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prods[n][2];
        prods[0][0] = 1;
        prods[n - 1][1] = 1;
        for(int i = 1; i < n; i++) {prods[i][0] = prods[i-1][0]*nums[i-1];}
        for(int i = n-2; i >= 0; i--) {prods[i][1] = prods[i+1][1]*nums[i+1];}
        vector<int> ans;
        for(int i = 0; i < n; i++) {ans.push_back(prods[i][0]*prods[i][1]);}
        return ans;
    }
};
