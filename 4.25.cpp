#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b) {
    while(b) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m,n; cin >> m >> n;
    m*=2;
    n*=2;

    while(m) {
        int k;
        for (int i = 1; i<=m; i++) {
            if (n%i == 0) {
                k = i;
            }
        }
        m -= k;
        cout << n/ucln(k,n) << ' ';
    }

    return 0;
}
