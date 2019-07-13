class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int A = 0, B = 0;
        int n = seq.size();
        vector<int> ret(n, 0);
        for(int i = 0; i< seq.size(); i++) {
            if(seq[i] == '(') {
                if(A < B)
                    A++;
                else
                    B++, ret[i] = 1;
            }
            if(seq[i] == ')') {
                if(A > B)
                    A--;
                else
                    B--, ret[i] = 1;
            }
        }
        return ret;
    }
};
