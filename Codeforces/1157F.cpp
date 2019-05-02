#include<bits/stdc++.h>
using namespace std;

int cnt[200002], suffix[200002];

int main() {
    int n;
    cin >> n;
    pair<int, int> ans;
    deque<int> dq;
    while(n--) {
        int a;
        cin >> a;
        cnt[a]++;
    }
    for(int i = 200001; i >= 0; i--) {
        suffix[i] = cnt[i] + (cnt[i + 1] > 1 ? suffix[i + 1] : cnt[i + 1]);
        ans = max(ans, { suffix[i], i });
    }
    cout << ans.first << endl;
    for(int i = ans.second; ; i++) {
        if(cnt[i] > 0)
            dq.push_front(i);
        for(int j = 0; j < cnt[i] - 1; j++)
            dq.push_back(i);
        if(cnt[i] < 2 && i != ans.second)
            break;    
    }
    for(auto x : dq)
        cout << x << " ";
}
