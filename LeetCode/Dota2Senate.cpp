class Solution {
public:
    string predictPartyVictory(string senate) {
        int count = 0, len = 0;
        while(senate.size() != len) {
            len = senate.size();
            string s;
            for(int i = 0; i < senate.size(); i++) {
                if(senate[i] == 'R') {
                    if(count++ >= 0)
                        s += 'R';
                }
                else {
                    if(count-- <= 0) {
                        s += 'D';
                    }
                }
            }
            senate = s;
            // cout << s << endl;
        }
        return senate[0] == 'R' ? "Radiant" : "Dire";
    }
};
