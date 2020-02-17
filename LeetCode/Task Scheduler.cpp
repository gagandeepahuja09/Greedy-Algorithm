class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> cnt(26, 0);
        for(int i = 0; i < tasks.size(); i++) {
            cnt[tasks[i] - 'A']++;
        }
        sort(cnt.begin(), cnt.end());
        int sameFreq = 0, i = 25;
        while(i >= 0 && cnt[i--] == cnt[25])
            sameFreq++;
        int ans = (cnt[25] - 1) * (n + 1) + sameFreq;
        return max((int)tasks.size(), ans);
    }
};
