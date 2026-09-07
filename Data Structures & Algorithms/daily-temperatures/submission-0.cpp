class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int, int>> st; //{temp, ind}
        vector<int> ans(t.size(), 0);
        for(int i = 0; i < t.size(); i++) {
            while(true){
                if(!st.empty() && t[i] > st.top().first) {
                    ans[st.top().second] = i - st.top().second;
                    st.pop();
                }
                else {st.push({t[i], i}); break;}
            }
        }
        return ans;
    }
};
