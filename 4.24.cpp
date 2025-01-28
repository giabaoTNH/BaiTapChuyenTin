#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int> > a;
vector<int> ans;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    a.resize(n);
    for (int i = 0; i<n; i++) cin >> a[i].second >> a[i].first;

    sort(a.begin(),a.end());

    for (int i = 0; i<n; i++) {
        int dem = 0;
        for (int u:ans) {
            dem += (u >= a[i].second && u <= a[i].first);
        }
        if (dem == 0) {
            ans.push_back(a[i].first);
            ans.push_back(a[i].first-1);
        }else if (dem == 1) {
            ans.push_back(a[i].first);
        }
    }
    sort(ans.begin(), ans.end());
    for (int i : ans) cout << i << ' ';
    cout << endl;

    return 0;
}
