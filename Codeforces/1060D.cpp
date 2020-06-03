#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 1234567
#define MOD 1000000007

int b[N], p[N];
char s[N];

int n;

int f(char c, int k) {
    vvi v;
    for(int i = 0; i < n; i++) {
        if(s[i] == c && p[i] <= k) {
            v.pb({ p[i], b[i] });
        }
    }
    sort(v.begin(), v.end());
    int sz = v.size();
    vi pref(sz);
    if(sz < 2)  return -1;
    pref[0] = v[0][0];
    for(int i = 1; i < sz; i++) {
        pref[i] = max(pref[i - 1], v[i][0]);
    }
    int j = 0;
    int ans = -1;
    for(int i = 1; i < sz; i++) {
        while(j < i && v[i][0] + v[j][0] <= k) {
            j++;
        }
        if(v[i][0] + v[j][0] > k)
            j--;
        if(j) {
            ans = max(ans, pref[j] + v[i][1]);
        }
    }
    return ans;
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi l(n), r(n);
        for(int i = 0; i < n; i++)
            cin >> l[i] >> r[i];
        sort(l.begin(), l.end());
        sort(r.begin(), r.end());
        int ans = n;
        for(int i = 0; i < n; i++) {
            ans += max(l[i], r[i]);
        }
        cout << ans << endl;
    }
	return 0;
}
