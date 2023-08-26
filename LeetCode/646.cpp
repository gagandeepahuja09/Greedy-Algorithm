class Solution {
public:
    static bool cmpEndSort(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    // [1, 2] [2, 3] [3, 5] [5, 5] [6, 7]
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), cmpEndSort);
        int currEnd = pairs[0][0], chainLen = 1;
        for (int i = 1; i < pairs.size(); i++) {
            if (pairs[i][0] > currEnd) {
                currEnd = pairs[i][1];
                chainLen++;
            }
        }
        return chainLen;
    }
};
