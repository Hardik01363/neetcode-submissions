class Solution {
public:
    bool isValid(string s) {
        stack<char> parens;
        unordered_map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        for(auto c : s) {
            if(c == '(' || c == '{' || c == '[') parens.push(c);
            else if(!parens.empty() && mp[c] == parens.top()) parens.pop();
            else parens.push(c);
        }
        if(parens.empty()) return true;
        return false;
    }
};
