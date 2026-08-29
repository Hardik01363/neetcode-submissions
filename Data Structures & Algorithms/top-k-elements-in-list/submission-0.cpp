class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        unordered_map<int, vector<int>> freq;
        vector<int> ans;
        int n = 0;
        for(int i = 0; i < nums.size(); i++){
            if(cnt.contains(nums[i])) cnt[nums[i]]++;
            else cnt[nums[i]] = 1;
        }
        for(const auto& pair : cnt) {
            if(freq.contains(pair.second)) freq[pair.second].push_back(pair.first);
            else freq[pair.second] = {pair.first};
        }
        for(int i = nums.size(); i >= 0; i--) {
            if(freq.contains(i)){
                for(auto e : freq[i]) {
                    ans.push_back(e);
                    n++;
                    if(n==k) return ans;
                }
            }
        }
        return ans;
    }
};
