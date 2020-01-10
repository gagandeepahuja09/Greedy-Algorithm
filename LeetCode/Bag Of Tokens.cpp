class Solution {
public:
    // Give some power => Get 1 point
    // While giving some power => greedily we should give smallest power
    // Give 1 point => Get some power
    // While taking some power => greedily we schould take largest power
    // Hence, we can use two pointers one for giving smallest power and
    // other for taking largest power.
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(), tokens.end());
        int res = 0;
        int i = 0, j = tokens.size() - 1, points = 0;
        while(i <= j) {
            if(P >= tokens[i]) {
                P -= tokens[i++];
                res = max(res, ++points);
            }
            else if(points >= 1) {
                points--;
                P += tokens[j--];
            }
            else
                break;
        }
        return res;
    }
};
