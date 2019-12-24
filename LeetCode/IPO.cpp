class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& p, vector<int>& c) {
        priority_queue<int> low;
        multiset<pair<int, int>> high;
        for(int i = 0; i < p.size(); i++) {
            if(c[i] <= W) {
                low.push(p[i]);
            }
            else {
                high.insert({ c[i], p[i] });
            }
        }
        while(k-- && low.size()) {
            W += low.top(); low.pop();
            for(auto i = high.begin(); high.size() && i -> first <= W; i = high.erase(i))
                low.push(i -> second);
        }
        return W;
    }
};
