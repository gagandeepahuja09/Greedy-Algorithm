class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        map<int, double> posToTime;
        for(int i = 0; i < pos.size(); i++) {
            posToTime[pos[i]] = ((double)target - pos[i]) / speed[i];
        }
        int fleets = 0;
        double currTime = 0;
        for(auto it = posToTime.rbegin(); it != posToTime.rend(); it++) {
            if(it -> second > currTime) {
                currTime = it -> second;
                ++fleets;
            }
        }
        return fleets;
    }
};
