#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(4 * n);
        unordered_map<int, int> mp;
        for(int i = 0; i < 4 * n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ans = true;
        for(int i = 0; i < 4 * n; i++) {
            if(mp[a[i]] % 2)
                ans = false;
        }
        if(ans) {
            sort(a.begin(), a.end());
            int i = 1, j = a.size() - 2;
            int area = a[0] * a.back();
            while(i < j) {
                if(a[i++] * a[j--] != area) {
                    ans = false;
                    break;
                }
            }
        }
        ans ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}
