#include <bits/stdc++.h>
using namespace std;

int binMul(int a, int b, int c) {
    a = a%c;
    int res = 0;
    while(b) {
        if (b&1) res = (res+a)%c;
        a = (a*2)%c;
        b/=2;
    }
    return res;
}

int po(int a, int b, int c) {
    a = a%c;
    int res = 1;
    while(b) {
        if (b&1) res = binMul(res,a,c);
        a = binMul(a,a,c);
        b/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m,n,k; cin >> m >> n >> k;
    int e = 1;
    for (int i = 1; i<=k; ++i) e*=10;

    cout << po(m,n,e) << endl;

    return 0;
}
