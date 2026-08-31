class Solution {
public:
    int climbStairs(int n) {
        vector<int> a(n+1, -1);
        return solve(n, a);
    }

    int solve(int n, vector<int>& a) {
        if(n < 0) return 0;
        if(n == 0) return 1;
        if(a[n] != -1) return a[n];
        return a[n] = solve(n-1, a) + solve(n-2, a);
    }
};
