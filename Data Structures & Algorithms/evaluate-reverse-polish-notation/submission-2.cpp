class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        unordered_set<string> str({"+", "-", "*", "/"});
        int ans;
        for(int i = 0;i < tokens.size(); i++) {
            if(str.contains(tokens[i])) {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if(tokens[i] == "+") {ans = num1 + num2; st.push(ans);}
                else if(tokens[i] == "-") {ans = num1 - num2; st.push(ans);}
                else if(tokens[i] == "*") {ans = num1 * num2; st.push(ans);}
                else if(tokens[i] == "/") {ans = num1 / num2; st.push(ans);}
            }
            else {
                int temp = stoi(tokens[i]);
                st.push(temp);
            }
        }
        return st.top();
    }
};
