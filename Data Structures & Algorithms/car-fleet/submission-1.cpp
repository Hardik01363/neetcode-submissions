class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans = 1;
        stack<double> times;
        vector<pair<int, int>> cars;
        for(int i = 0; i < speed.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());
        for(int i = 0; i < cars.size(); i++) {
            times.push((target - cars[i].first) / (double)cars[i].second);
        }
        double curr = times.top();
        while(!times.empty()) {
            if(times.top() <= curr) times.pop();
            else {
                curr = times.top();
                times.pop();
                ans++;
            }
        }
        return ans;
    }
};
