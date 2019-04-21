class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        for(int i = 0; i < costs.size(); i++) {
            costs[i][0] -= costs[i][1];
        }
        sort(costs.begin(), costs.end());
        int cost = 0;
        for(int i = 0; i < costs.size() / 2; i++) {
            cost += (costs[i][0] + costs[i][1]);
        }
        for(int i = costs.size() / 2; i < costs.size(); i++) {
            cost += costs[i][1];
        }
        return cost;
    }
};
