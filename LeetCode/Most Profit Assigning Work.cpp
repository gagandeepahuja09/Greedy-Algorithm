class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& worker) {
        vector<vector<int>> diffPro;
        for(int i = 0; i < diff.size(); i++) {
            diffPro.push_back({ diff[i], profit[i] });
        }
        sort(diffPro.begin(), diffPro.end());
        sort(worker.begin(), worker.end());
        int currMax = 0, j = 0, totalPro = 0;
        for(int i = 0; i < worker.size(); i++) {
            while(j < diff.size() && diffPro[j][0] <= worker[i]) {
                currMax = max(currMax, diffPro[j++][1]);
            }
            totalPro += currMax;
        }
        return totalPro;
    }
};
