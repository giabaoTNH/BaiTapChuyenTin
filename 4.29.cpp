#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > a;
int main() {
    int n; cin >> n;
    a.resize(n);
    for (int i = 0; i<n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(),a.end());

    int ans = 0;
    for (int i = 0; i<n; i++) {
        if (a[i].first == -1) continue;
        for (int j = i+1; j<n; j++) {
            if (a[j].first == a[i].first) a[j].first = -1;
        }
        ans += a[i].second;
    }
    cout << ans <<endl;
}
