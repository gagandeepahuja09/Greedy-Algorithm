/*Given an array of integers A and an integer B. Find and return the maximum value of | s1 - s2 |

where s1 = sum of any subset of size B, s2 = sum of elements of A - sum of elemets of s1*/

int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int s1 = 0, s2 = 0;
    if(B > A.size() / 2) {
        for(int i = 0; i < A.size(); i++) {
            if(i < A.size() - B)
                s1 += A[i];
            else
                s2 += A[i];
        }
        return abs(s1 - s2);
    }
    else {
        for(int i = 0; i < A.size(); i++) {
            if(i < B)
                s1 += A[i];
            else
                s2 += A[i];
        }
        return abs(s1 - s2);
    }
}

