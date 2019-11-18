class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& A, vector<int>& B, int k) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<vector<int>> ret;
        if(!A.size() || !B.size())
            return ret;
        pq.push({ A[0] + B[0], { 0 , 0 }});
        while(!pq.empty() && k--) {
            auto t = pq.top();
            pq.pop();
            int i = t.second.first, j = t.second.second;
            ret.push_back({ A[i], B[j] });
            if(i < A.size() - 1) {
                pq.push({ A[i + 1] + B[j], { i + 1, j }});
            }
            if(i == 0 && j < B.size() - 1) {
                pq.push({ B[j + 1] + A[i], { i, j + 1 }});
            }
        }
        return ret;
    }
};
