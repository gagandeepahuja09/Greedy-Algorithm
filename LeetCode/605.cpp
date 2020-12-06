class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        int count = 0;

        for (int i = 0; i < flower.size(); i++) {
            if (
                flower[i] == 0 && 
                (i == 0 || flower[i - 1] == 0) && 
                (i == flower.size() - 1 || flower[i + 1] == 0)
               ) {
                flower[i] = 1;
                count++;
            }
        }
        // cout << count << endl;
        return (count >= n);
    }
};
