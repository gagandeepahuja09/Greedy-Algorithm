int Solution::bulbs(vector<int> &A) {
    int count = 0;
    int n = A.size();
    for(int i=0; i<n; i++) {
        // OFF and pressed event times means OFF
        if(A[i] == 0 && count%2 == 0)
            count++;
        // ON and pressed odd times means OFF    
        else if(A[i] == 1 && count%2 == 1)
            count++;
    }
    return count;
}

