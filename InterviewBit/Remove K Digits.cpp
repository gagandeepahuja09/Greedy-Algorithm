/*
Remove K Digits

Given a non-negative integer A represented as a string, remove B digits from the number 
so that the new number is the smallest possible.
*/
string Solution::solve(string A, int B) {
    for(int i = 0; i < A.size(); i++) {
        if(A[i] > A[i + 1]) {
            A.erase(A.begin() + i);
            i = max(i - 2, -1);
            B--;
            if(!B)
                break;
        }
    }
    reverse(A.begin(), A.end());
    while(A.size() && A.back() == '0')
        A.pop_back();
    reverse(A.begin(), A.end());    
    while(A.size() && B--) {
        A.pop_back();
    }
    return !A.size() ? "0" : A;    
}

