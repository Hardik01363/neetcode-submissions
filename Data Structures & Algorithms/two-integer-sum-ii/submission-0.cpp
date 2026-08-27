class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 1;
        int j = numbers.size();
        while(true) {
            int sum = numbers[i-1] + numbers[j-1];
            if(sum == target) break;
            else if(sum > target) j--;
            else if(sum < target) i++;
        }
        return {i, j};
    }
};
