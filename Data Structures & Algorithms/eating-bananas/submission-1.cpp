class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;
        for(auto e : piles) {if(e > right) {right = e;}}
        int mid;
        while(right > left) {
            mid = (right+left)/2;
            int n = 0;
            for(auto e : piles) {
                n += e/mid;
                if(e%mid != 0) n++;
            }
            if(n > h) left = mid + 1;
            else if (n <= h) right = mid;
        }
        return left;
    }
};
