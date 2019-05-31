/*
The ship company

The local ship renting service has a special rate plan:

 1. It is up to a passenger to choose a ship.

 2. If the chosen ship has a (a > 0) vacant places at the given moment, then the 
 ticket for such a ship costs a.

The passengers buy tickets in turn, the first person in the queue goes first, then 
goes the second one, and so on up to n-th person.

You need to tell the maximum and the minimum money that the ship company can earn if 
all n passengers buy tickets.*/


vector<int> Solution::solve(int A, int B, vector<int> &C) {
    int minCost = 0, maxCost = 0;
    priority_queue<int> pq;
    for(int i = 0; i < C.size(); i++) {
        pq.push(C[i]);
    }
    int k = A;
    while(!pq.empty() && k--) {
        int t = pq.top();
        if(!t)
            break;
        pq.pop();
        maxCost += t;
        if(t > 1)
            pq.push(t - 1);
    }
    priority_queue<int, vector<int>, greater<int>> minPq;
    k = A;
    for(int i = 0; i < C.size(); i++) {
        minPq.push(C[i]);
    }
    while(!minPq.empty() && k--) {
        int t = minPq.top();
        minPq.pop();
        minCost += t;
        if(t > 1)
            minPq.push(t - 1);
    }
    return { maxCost, minCost };
}

