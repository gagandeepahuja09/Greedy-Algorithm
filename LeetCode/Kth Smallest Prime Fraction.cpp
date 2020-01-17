class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& A, int K) {
        priority_queue<pair<double, pair<int, int>>> pq;
        pq.push({ (double)(-1.0 * A[0] / A.back()), { 0, A.size() - 1 }});
        while(K-- > 1) {
            auto t = pq.top();
            pq.pop();
            if(t.second.second == A.size() - 1 && t.second.second - t.second.first > 1) {
                pq.push({ (double)(-1.0 * A[t.second.first + 1] / A[t.second.second]), { t.second.first + 1, t.second.second }});    
            }
            if(t.second.second - t.second.first > 1) {
            t.second.second--;
            pq.push({ (double)(-1.0 * A[t.second.first] / A[t.second.second]), { t.second.first, t.second.second }});
            }
        }
        return { A[pq.top().second.first], A[pq.top().second.second] };
    }
};
