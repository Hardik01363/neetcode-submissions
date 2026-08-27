class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1) return 1;
        unordered_set<char> occ;
        int ans = 0;
        int i = 0;
        int j = 1;
        occ.insert(s[0]);
        while(j < s.size()) {
            while(occ.contains(s[j])) {occ.erase(s[i]); i++;}
            occ.insert(s[j]);
            if(j-i+1 > ans) ans = j-i+1;
            j++;
        }
        return ans;
    }
};
