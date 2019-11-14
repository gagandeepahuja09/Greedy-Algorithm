class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        unordered_map<int, int> pos;
        for(int i = 0; i < row.size(); i++) {
            pos[row[i]] = i;
        }
        int count = 0;
        for(int i = 0; i < row.size(); i += 2) {
            int me = row[i];
            int myCouple = (me & 1) ? me - 1 : me + 1;
            if(row[i + 1] != myCouple) {
                count++;
                int neighbor = row[i + 1];
                // change pos of neighbor & update in the row 
                row[pos[myCouple]] = neighbor;
                pos[neighbor] = pos[myCouple];
            }
        }
        return count;
    }
};
