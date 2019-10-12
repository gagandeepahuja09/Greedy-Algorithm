/*
Petrol prices

Rishik go to IB office on N days on his bike which consume exactly 1 litre petrol every day but his bike can only store at max B Litre of petrol. You are given petrol prices for all N days as integer array A. Find Minimum cost that could occur to rishik if he chooses optimal quantity to refuel everyday.

Note:

    Refueling station is very very close to rishik home. So, he can reach there from home at 0 petrol. but, he cannot go to office with 0 fuel.
    Initially bike has 0 fuel.

*/
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

