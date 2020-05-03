#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, k, a;
        cin >> n >> k;
        vi x(n), c(n);
        read(x);
        cin >> a;
        read(c);
        int mn = INT_MAX, curr = k, ans = 0;
        pqs pq;
        for(int i = 0; i < n; i++) {
            pq.push(c[i]);
            while(curr < x[i] && !pq.empty()) {
               ans += pq.top();
               curr += a;
               pq.pop(); 
            }
            if(curr < x[i]) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
