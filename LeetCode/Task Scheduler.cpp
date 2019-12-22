class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for(char task : tasks) {
            freq[task - 'A']++;
        }
        priority_queue<int> pq;
        for(int i = 0; i < 26; i++) {
            if(freq[i]) {
                pq.push(freq[i]);
            }
        }
        int time = 0;
        while(!pq.empty()) {
            int all = n + 1;
            vector<int> rem;
            while(all && !pq.empty()) {
                int count = pq.top();
                pq.pop();
                if(--count) {
                    rem.push_back(count);
                }
                time++;
                all--;
            }
            for(auto r : rem)
                pq.push(r);
            if(pq.empty()) {
                break; 
            }
            time += all;
        }
        return time;
    }
};
