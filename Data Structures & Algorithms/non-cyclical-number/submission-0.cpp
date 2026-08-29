class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        int sum = 0;
        unordered_set<int> prev;
        while(true) {
            while(num) {
                sum += (num%10) * (num%10);
                num /= 10;
            }
            if(prev.contains(sum)) return false;
            if(sum == 1) return true;
            prev.insert(sum);
            num = sum;
            sum = 0;
        }
    }
};
