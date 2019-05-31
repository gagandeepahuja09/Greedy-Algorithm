int Solution::solve(vector<int> &A, int B) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < A.size(); i++) {
        pq.push(A[i]);
    }
    for(int i = 0; i < B; i++) {
        if(!pq.empty()) {
            int t = pq.top();
            pq.pop();
            pq.push(-t);
        }
    }
    int sum = 0;
    while(!pq.empty()) {
        sum += pq.top();
        pq.pop();
    }
    return sum;
}

