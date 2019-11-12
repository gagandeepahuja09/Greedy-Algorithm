class Solution {
public:
    double mincostToHireWorkers(vector<int>& q, vector<int>& w, int K) {
        vector<vector<double>> workers;
        for(int i = 0; i < q.size(); i++) {
            workers.push_back({ (double)w[i] / (double)q[i] , (double)q[i] });
        }
        sort(workers.begin(), workers.end());
        priority_queue<int> pq;
        double ret = DBL_MAX, qsum = 0;
        for(auto worker : workers) {
            qsum += worker[1]; pq.push(worker[1]);
            if(pq.size() > K) {
                qsum -= pq.top();
                pq.pop();
            }
            if(pq.size() == K) {
                ret = min(ret, qsum * worker[0]);
            }
        }
        return ret;
    }
};
