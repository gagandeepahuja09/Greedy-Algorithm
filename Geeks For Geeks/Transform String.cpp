#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll T, ret;
    bool flag;
    string s, t;
    cin >> T;
    while(T--) {
        flag = true;
        ret = 0;
        cin >> s >> t;
        vector<int> cnt(256, 0);
        for(int i = 0; i < s.size(); i++)
            cnt[s[i]]++;
        for(int i = 0; i < s.size(); i++)
            cnt[t[i]]--;
        for(int i = 0; i < 256; i++) {
            if(cnt[i])
                flag = false;
        }    
        int i = s.size() - 1, j = t.size() - 1;
        if(i != j || !flag) {
            cout << -1 << endl;
            continue;
        }
        while(i >= 0) {
            while(i >= 0 && s[i] != t[j]) {
                ret++;
                i--;
            }
            if(i >= 0)
                i--, j--;
        }
        cout << ret << endl;
    } 
	return 0;
}
