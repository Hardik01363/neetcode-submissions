class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix[0].size();
        int m = matrix.size();
        int l = 0;
        int r = m - 1;
        int mid;
        while(l <= r) {
            mid = (l+r)/2;
            if(matrix[mid][0] == target || matrix[l][0] == target || matrix[r][0] == target) return true;
            else if(matrix[mid][0] > target) r = mid - 1;
            else {
                if(matrix[r][0] < target) l = r;
                else l = mid;
            }
            if(r - l < 2) break;
        }
        if(r >= l && r < m && matrix[r][0] <= target) l = r;
        int lef = 0;
        int rig = n - 1;
        while(lef <= rig) {
            mid = (lef+rig)/2;
            if(matrix[l][mid] == target) return true;
            else if(matrix[l][mid] < target) lef = mid + 1;
            else rig = mid - 1;
        }
        return false;
    }
};
