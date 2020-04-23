#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
     
int main() {
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<vector<ll>> v;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({ b, a });
    }
    sort(v.begin(), v.end());
    set<pair<ll, ll>> st;
    ll sum = 0;
    for(int i = n - 1; i >= 0; i--) {
        sum += v[i][1];
        st.insert({ v[i][1], i });
        while(st.size() > k) {
            auto it = st.begin();
            sum -= (*it).first;
            st.erase(it);
        }
        ans = max(ans, sum * (ll)v[i][0]);
    }
    cout << ans << endl;
}
