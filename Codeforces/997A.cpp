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
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') {
                count++;
                while(i < n && s[i] == '0')  i++;
                i--;
            }
        }
        if(count == 0) {
            cout << 0;
        }
        else if(x < y) {
            cout << (count - 1) * x + y;
        }
        else {
            cout << count * y;
        }
    }
	return 0;
}
