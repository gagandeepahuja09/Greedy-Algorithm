#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

int main() {
int n;
cin >> n;
vector<pair<int, int>> p(n);
for(int i = 0; i < n; i++) {
    cin >> p[i].first >> p[i].second;
}
sort(p.begin(), p.end());
int maxDay = p[0].second;
for(int i = 1; i < n; i++) {
    if(p[i].second < maxDay) {
        maxDay = p[i].first;
    }
    else {
        maxDay = p[i].second;
    }
}
cout << maxDay;
}
