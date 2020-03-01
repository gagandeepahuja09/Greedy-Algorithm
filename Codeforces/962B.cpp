#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int count = 0, ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '*')
            continue;
        count = 0;
        while(s[i++] == '.') {
            count++;
        }
        i--;
        if(a <= 0 && b <= 0)
            break;
        int sz = count / 2;
        if(b > a)
            swap(a, b);
        if(count % 2) {
            int diff = min(a, sz + 1);
            a -= diff;
            ans += diff;
            diff = min(b, sz);
            b -= diff;
            ans += diff;
        }
        else {
            int diff = min(a, sz);
            a -= diff;
            ans += diff;
            diff = min(b, sz);
            b -= diff; 
            ans += diff;
        }
    }
    cout << ans << endl;
}
