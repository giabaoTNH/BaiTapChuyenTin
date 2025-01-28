#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k; cin >> n >> k;
    int st = (n*n)/2;
    int sd = n*n - (n*n)/2;
    int ans = 0;
    cout << st << ' ' << sd << endl;
    cout << "Hello world" << endl;
    for (int i = 1; i<=k ; i++) {
        int a1 =1;
        int a2 = 1;
        int gt_k1 = 1;
        int gt_k2 = 1;
        for (int j = 1; j<=i; j++) gt_k1 *= j;
        for (int j = 1; j<=k-i; j++) gt_k2 *= j;
        for (int j = st-i+1; j<=st; j++) a1*=j;
        for (int j = sd-(k-i)+1; j<=sd; j++) a2*=j;
        ans += (a1/gt_k1)*(a2/gt_k2);
        cout << "Hello world" << endl;
    }
    cout << "Hello world" << endl;
    cout << ans << endl;

    return 0;
}
