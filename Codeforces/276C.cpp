#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 200005

ll n, q;

int main() {
    // ll t;
    // cin >> t; while(t--) {
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> pre(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        while(q--) {
            ll l, r;
            cin >> l >> r;
            l--; r--;
            pre[l]++;
            if(r < n - 1)
                pre[r + 1]--;
        }
        int val = 0;
        for(int i = 0; i < n; i++) {
            val += pre[i];
            pre[i] = val;
        }
        sort(a.begin(), a.end());
        sort(pre.begin(), pre.end());
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            ans += (pre[i] * a[i]);
        }
        cout << ans << endl;
    // }
}
