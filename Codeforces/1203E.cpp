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
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        map<int, int> mp;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] > 1 && !mp[a[i] - 1]) {
                cnt++;
                mp[a[i] - 1]++;
            }
            else if(!mp[a[i]]) {
                cnt++;
                mp[a[i]]++;
            }
            else if(!mp[a[i] + 1]) {
                cnt++;
                mp[a[i] + 1]++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}
