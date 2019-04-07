class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) {
        // Greedy
        int mx = 0, n = clips.size();
        for(int i = 0; i < clips.size(); i++) {
            mx = max(mx, clips[i][1]);
        }
        if(mx < T)
            return -1;
        int start = 0, steps = 0, idx = -1;
        while(start < T) {
            int maxClip = -1, idx = -1;
            for(int i = 0; i < n; i++) {
                if(clips[i][0] <= start && clips[i][1] > maxClip) {
                    maxClip = clips[i][1];
                    idx = i;
                }
            }
            if(maxClip == -1)
                return -1;
            start = maxClip;
            steps++;
        }
        return steps;
    }
};
