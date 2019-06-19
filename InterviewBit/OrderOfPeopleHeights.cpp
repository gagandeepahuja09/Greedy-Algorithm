vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    vector<int> ret;
    vector<pair<int, int>> people;
    for(int i = 0; i < A.size(); i++) {
        people.push_back({ A[i], B[i] });
    }
    sort(people.begin(), people.end(),[](pair<int,int> p1, pair<int,int> p2){
        return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second);
    });
    vector<int> sol;
    for (auto person : people){
        sol.insert(sol.begin() + person.second, person.first);
    }
    return sol;
}

