#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> par;

int find(int u) {
    if(par[u] == u)
        return u;
    return par[u] = find(par[u]);
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v(2e5 + 5);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int count = 0;
            while(x) {
                v[x].push_back(count++);
                x /= 2;
            }
        }
        int ans = INT_MAX;
        for(int i = 0; i < v.size(); i++) {
            if(v[i].size() >= k) {
                sort(v[i].begin(), v[i].end());
                int sum = accumulate(v[i].begin(), v[i].begin() + k, 0);
                // cout << i << " " << sum << endl;
                ans = min(ans, sum);
            }
        }
        cout << ans << endl;
    }
	return 0;
}
