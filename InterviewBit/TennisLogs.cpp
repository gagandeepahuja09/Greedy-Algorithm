string Solution::solve(int A, vector<int> &B) {
    int spec = 3;
    for(int i = 0; i < B.size(); i++) {
        if(B[i] == spec) {
            return "No";
        }
        if((B[i] == 1 && spec == 2) || (B[i] == 2 && spec == 1)) {
            spec = 3;
        }
        else if((B[i] == 1 && spec == 3) || (B[i] == 3 && spec == 1)) {
            spec = 2;
        }
        else if((B[i] == 2 && spec == 3) || (B[i] == 3 && spec == 2)) {
            spec = 1;
        }
    }
    return "Yes";
}

