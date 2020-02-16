class Solution {
public:
    bool isPossible(vector<int>& target) {
        long sum = accumulate(target.begin(), target.end(), (long)0);
        priority_queue<long> pq(target.begin(), target.end());
        while(pq.top() * 2 > sum) {
            long mx = pq.top();   pq.pop();
            pq.push(2 * mx - sum);
            sum = mx;
        }
        return (int)sum == target.size();
    }
};
