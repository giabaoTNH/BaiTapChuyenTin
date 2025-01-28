#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    string ans = "";
    while(n > 1) {
        if (n&1) {
            n*=3;
            n+=1;
            ans = "/3" + ans;
        } else {
            n/=2;
            ans = "*2" + ans;
        }
    }
    cout << 1 << ans << endl;

    return 0;
}
