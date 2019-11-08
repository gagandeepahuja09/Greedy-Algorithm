#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll val;
    cin >> val;
    vector<ll> a(10);
    ll mn = INT_MAX, idx = -1;
    for(int i = 1; i <= 9; i++) {
        cin >> a[i];
        if(a[i] < mn) {
            mn = a[i];
            idx = i;
        }
    }
    if(mn > val) {
        cout << -1;
        return 0;
    }
    mn = val / mn;
    val = val % a[idx];
    for(int i = 0; i < mn; i++) {
        int j = 9;
        for(; j > idx; j--) {
            if(a[j] - a[idx] <= val) {
                val -= (a[j] - a[idx]);
                break;
            }
        }
        cout << j;
    }
}
