#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k; cin >> n >> k;
    a.resize(n);
    for (int i = 0; i<n; ++i) cin >> a[i];
    sort(a.begin(),a.end());
    cout << a[k-1] << '\n';

    return 0;
}
