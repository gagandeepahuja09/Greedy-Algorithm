bool cmp(pair<int, int> a, pair<int, int> b) {
    return ((a.first > b.first) || (a.first == b.first && a.second < b.second));
}

vector<int> Solution::order(vector<int> &A, vector<int> &B) {
    vector<pair<int, int>> people;
    for(int i = 0; i < A.size(); i++) {
        people.push_back({ A[i], B[i] });
    }
    sort(people.begin(), people.end(), cmp);
    vector<int> ret;
    for(int i = 0; i < people.size(); i++) {
        ret.insert(ret.begin() + people[i].second, people[i].first);
    }
    return ret;
}

