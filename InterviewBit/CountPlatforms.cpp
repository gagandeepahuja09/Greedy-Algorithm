int Solution::solve(vector<vector<int> > &A) {
    vector<pair<int, int>> p;
    for(int i = 0; i < A.size(); i++) {
        p.push_back({ A[i][0], 1 });
        p.push_back({ A[i][1], 0 });
    }
    sort(p.begin(), p.end());
    int cnt = 0, mx = 0;
    for(int i = 0; i < p.size(); i++) {
        if(p[i].second == 1)
            cnt++;
        else
            cnt--;
        mx = max(mx, cnt);    
    }
    return mx;
}

