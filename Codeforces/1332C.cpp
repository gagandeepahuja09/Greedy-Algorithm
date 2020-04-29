    #include <bits/stdc++.h>
    using namespace std;
     
    #define int long long int
     
    signed main() {
        int t;
        cin >> t;
        while(t--) {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;
            int cnt[k][26];
            memset(cnt, 0, sizeof cnt);
            for(int i = 0; i < n; i++) {
                cnt[i % k][s[i] - 'a']++;
            }
            // i, k + i, k + 2 * i, ... form a group
            int ans = 0;
            for(int i = 0; i < k; i++) {
                int total = 0, mx = 0;
                for(int j = 0; j < 26; j++) {
                    int curr = cnt[i][j] + cnt[k - 1 - i][j];
                    total += curr;
                    mx = max(mx, curr);
                }
                // change all chars, expect the one which has highest occurence
                ans += (total - mx);
            }
            cout << ans / 2 << endl;
        }
    	return 0;
    }

