class Solution {
public:
    int maximumSwap(int num) {
        int maxIdx = -1, maxDigit = 0, leftIdx = -1, rightIdx = -1;
        string s = to_string(num);
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] > maxDigit) {
                maxDigit = s[i];
                maxIdx = i;
                continue;
            }
            if(s[i] < maxDigit) {
                leftIdx = i;
                rightIdx = maxIdx;
            }
        }
        if(leftIdx != -1 && rightIdx != -1) {
            swap(s[leftIdx], s[rightIdx]);
        }
        return stoi(s);
    }
};
