class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int sum = 0, j = 0, mn = INT_MAX;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < A.size(); i++) {
            sum += A[i];
            while(pq.size() && sum - pq.top().first >= K) {
                    auto p = pq.top();
                    pq.pop();
                    mn = min(mn, i - p.second);
            }
            if(sum >= K)
                mn = min(mn, i + 1);
            pq.push({ sum, i });
        }
        return mn == INT_MAX ? -1 : mn;
    }
};
