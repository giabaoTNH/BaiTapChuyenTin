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

bool fermet(int n) {
    if (n < 10) return (n==2) || (n==3) || (n==5) || (n == 7);
    return (po(2,n,n) == 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    cout << n << (fermet(n) ? " La so nguyen to\n" : " Khong la so nguyen to\n");

    return 0;
}
