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
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        read(a);
        vvi v;
        for(int i = 0; i < n; i++) {
            int c = 0, num = a[i];
            while(a[i] % 3 == 0) {
                c++; a[i] /= 3;
            }
            v.pb({ -c, num });
        }
        sort(v.begin(), v.end());
        for(auto i : v)
            cout << i[1] << " ";
    }
}
