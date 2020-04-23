#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
     
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int j = n / 2, ans = n;
    int pos = -1;
    for(int i = 0; i < n / 2; i++) {
        while(j < n && a[j] < 2 * a[i])
            j++;
        if(j < n && a[j] >= 2 * a[i]) {
            if(pos == -1)
                pos = j;
            j++;
            ans--;
        }
    }
    cout << ans << endl;
}
