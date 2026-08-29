class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size() - 1;
        while(carry) {
            if(i == 0 && digits[0] == 9) {
                vector<int> ans(digits.size() + 1, 0);
                ans[0]++;
                return ans;
            }
            else if(digits[i] == 9) {digits[i] = 0; i--;}
            else {
                digits[i]++;
                carry = 0;
            }
        }
        return digits;
    }
};
