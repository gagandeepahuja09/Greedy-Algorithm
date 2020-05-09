#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define ins insert
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'

signed main() {
    int n, m;
    cin >> n >> m;
    vvi a(m);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int num;
            cin >> num;
            a[i].pb(num);
        }
    }
    vi ans = { -1 };
    for(int i = 0; i < n - 1; i++) {
        vvi v;
        vi temp;
        int sum = 0;
        for(int j = 0; j < m; j++) {
            sum += (a[j][i] - a[j][n - 1]);
            v.pb({ a[j][i] - a[j][n - 1], j });
        }
        sort(v.begin(), v.end());
        for(int k = 0; k < v.size() && sum < 0; k++) {
            temp.pb(v[k][1]);
            sum -= v[k][0];
        }
        if(ans == vi({ -1 }) || ans.size() > temp.size()) {
            ans = temp;
        }
    }
    cout << ans.size() << endl;
    for(int i : ans)
        cout << i + 1 << " ";
}
