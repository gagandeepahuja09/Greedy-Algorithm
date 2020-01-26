class Solution {
public:
    int maxValueAfterReverse(vector<int>& A) {
        int min2 = 123456, max2 = -123456, sum = 0, ret = 0, n = A.size();
        for(int i = 0; i < n - 1; i++) {
            int a = A[i], b = A[i + 1];
            sum += abs(a - b);
            ret = max(ret, abs(A[0] - b) - abs(a - b)); 
            ret = max(ret, abs(A[n - 1] - a) - abs(a - b));
            max2 = max(max2, min(a, b));
            min2 = min(min2, max(a, b));
            ret = max(ret, 2 * (max2 - min2));
        }
        return sum + ret;
    }
};
