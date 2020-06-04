#include <bits/stdc++.h>
using namespace std;

#define int long long int

int f(int t) {
    int low = 0, high = t, ans = 0;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(mid * (mid + 1) <= 2 * t) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

signed main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b;
    int num = f(sum);
    vector<int> v(num + 1, 0);
    int curr = a, cnt = 0;
    for(int i = num; i >= 1; i--) {
        if(curr >= i) {
            curr -= i;
            v[i] = 1;
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 1; i <= num; i++) {
        if(v[i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << num - cnt << endl;
    for(int i = 1; i <= num; i++) {
        if(v[i] == 0) {
            cout << i << " ";
        }
    }
}
