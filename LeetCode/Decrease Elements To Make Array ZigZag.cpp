class Solution {
public:
    int movesToMakeZigzag(vector<int>& a) {
        int c1 = 0, c2 = 0, n = a.size();
        for(int i = 0; i < n; i++) {

            int temp = INT_MAX;
            if(i > 0) {
                temp = min(temp, a[i - 1]);
            }
            if(i < n - 1) {
                temp = min(temp, a[i + 1]);
            }
            if(a[i] >= temp) {
                if(i % 2 == 0)
                    c1 += (a[i] - temp + 1);
                else
                    c2 += (a[i] - temp + 1);
            }
        }
        return min(c1, c2);
    }
};
