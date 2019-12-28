class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ret;
        int l = 0, h = S.size();
        for(int i = 0; i <= S.size(); i++) {
            ret.push_back(S[i] == 'I' ? l++ : h--);
        }
        return ret;
    }
};
