class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        else if(n < 0) return 1 / calcpow(x, -1 * n);
        else return calcpow(x, n);
    }
    double calcpow(double x, int n) {
        if(n == 0) return 1;
        if(n == 1) return x;
        double halv = calcpow(x, n/2);
        if(n%2 == 0) return halv * halv;
        else return halv * halv * x;
    }
};
