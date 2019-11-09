#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int n, p;
string s;
cin >> n >> p >> s;
n--;
p--;
if(p > n / 2)
    p = n - p;
int l = -1, r = 0, ans = 0;
for(int i = 0; i <= n / 2; i++) {
    if(s[i] != s[n - i]) {
        if(l < 0)
            l = i;
        else
            r = i;
        int diff = abs(s[i] - s[n - i]);
        ans += min(diff, 26 - diff);
    }
}
ans += min(abs(p - l), abs(p - r));
ans += max(r - l, 0);
cout << (l < 0 ? 0 : ans) << endl;
}
