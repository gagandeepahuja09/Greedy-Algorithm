#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    // int t;
    // cin >> t;
    // while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
        }
        for(int i = 0; i < n; i++) {
            cin >> a[i].second;
        }
        sort(a.begin(), a.end());
        priority_queue<int> pq;
        int i = 0, num, sum = 0, ans = 0;
        while(!pq.empty() || i < n) {
            if(pq.empty())
                num = a[i].first;
            for(; i < n && a[i].first == num; i++) {
                sum += a[i].second;
                pq.push(a[i].second);
            }
            sum -= pq.top(); pq.pop();
            num++;
            ans += sum;
        }
        cout << ans << endl;
    // }
}
