class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size() < s1.size()) return false;
        int a[26] = {};
        int b[26] = {};
        int matches = 0;
        for(auto c : s1) {a[c - 'a']++;}
        for(int i = 0; i < s1.size(); i++) {b[s2[i] - 'a']++;}
        for(int i = 0; i < 26; i++) {if(a[i] == b[i]) matches++;}
        if(matches == 26) return true;
        for(int i = s1.size(); i < s2.size(); i++) {
            int j = i - s1.size();
            if(a[s2[j] - 'a'] == b[s2[j] - 'a']) {matches--;}
            else if(a[s2[j] - 'a'] - b[s2[j] - 'a'] == -1) {matches++;}
            b[s2[j] - 'a']--;
            if(a[s2[i] - 'a'] == b[s2[i] - 'a']) {matches--;}
            else if(a[s2[i] - 'a'] - b[s2[i] - 'a'] == 1) {matches++;}
            b[s2[i] - 'a']++;
            if(matches == 26) return true;
        }
        return false;
    }
};
