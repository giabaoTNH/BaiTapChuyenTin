#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int p1[1000000], p2[1000000];
map<int,int> mp;
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int i = 1; i<=n; i++) p1[i] = p1[i-1]+a[i-1];
	for (int i = n; i>=1; i--) p2[i] = p2[i+1]+a[i-1];
	for (int i = 1; i<=n; i++) cout << p1[i] << ' ' << p2[i] << endl;
	int ans = 0;
	for (int i = 1; i<=n; i++) {
		ans += mp[p2[i]];
		mp[p1[i]]++;
	}
	cout << ans << endl;

	return 0;
}
