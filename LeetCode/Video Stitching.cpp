class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int T) {
        sort(clips.begin(), clips.end());
        int count = 0, currend = 0, maxend = 0, i = 0;
        while(i < clips.size()) {
            if(clips[i][0] > currend)
                return -1;
            while(i < clips.size() && clips[i][0] <= currend) {
                maxend = max(maxend, clips[i++][1]);
            }
            currend = maxend;
            count++;
            if(currend >= T)
                return count;
        }
        return -1;
    }
};
