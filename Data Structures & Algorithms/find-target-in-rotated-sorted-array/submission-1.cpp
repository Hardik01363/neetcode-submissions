class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int mid;
        while(l <= r) {
            int mid = (l+r)/2;
            if(nums[mid] == target) return mid;
            else if(nums[l] <= nums[mid]) {
                if(target >= nums[l] && target <= nums[mid]) {r = mid - 1; continue;}
                else {l = mid + 1; continue;}
            }
            else if(nums[r] >= nums[mid]) {
                if(target <= nums[r] && target >= nums[mid]) {l = mid + 1; continue;}
                else {r = mid - 1; continue;}
            }
        }
        return -1;
    }
};
