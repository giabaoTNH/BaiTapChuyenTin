#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    a.resize(n);
    for (int i = 0; i<n; ++i) {
        cin>>a[i];
    }

    int sum = 0;
    int x,y;
    while (a.size() > 1) {
        sort(a.begin(),a.end(),greater<int>());
        x = a.back(); a.pop_back();
        y = a.back(); a.pop_back();
        a.push_back(x+y);
        sum+=x+y;
    }
    cout << sum << endl;

    return 0;
}
