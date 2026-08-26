class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++) {
            vector<int> cnt(26, 0);
            for(int j = 0; j < strs[i].size(); j++) {
                cnt[strs[i][j] - 'a']++;
            }
            mp[cnt].push_back(strs[i]);
        }
        for (const auto& pair : mp) {
        ans.push_back(pair.second);
        }
        return ans;
    }
};
