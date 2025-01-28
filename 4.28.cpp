#include <bits/stdc++.h>
using namespace std;

vector<int> f;

int main() {
    int n;cin >> n;
    f.push_back(1);
    f.push_back(1);
    while(f.back() <= n) {
        f.push_back(f[f.size()-1] + f[f.size()-2]);
    }
    for (int i = f.size()-1; i >= 0; --i) {
        if (f[i] <= n) {
            n-=f[i];
            cout << f[i] << ' ';
        }
    }
    cout << endl;
}
