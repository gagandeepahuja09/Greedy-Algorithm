int Solution::solve(vector<int> &A, int B) {
    priority_queue<pair<int, int>> pq;
    int ret = 0;
    for(int i = 0; i < A.size(); i++) {
        pq.push({ -A[i], i });
        while(!pq.empty() && pq.top().second <= i - B)
            pq.pop();
        if(!pq.empty()) {
            ret -= pq.top().first;
        }
    }
    return ret;
}

