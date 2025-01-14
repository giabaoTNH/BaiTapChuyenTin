#include <bits/stdc++.h>
using namespace std;

int mp[100005];
int cd[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(mp, 0, sizeof(mp));
	
	int n; cin >> n;
	for (int i = 0; i<n; i++) {
		int u,v; cin >> u >> v;
		mp[u] += 1;
		mp[v+1] -= 1;
	}
	
	cd[0] = mp[0];
	for (int i = 1; i<= 100000; i++) {
		cd[i] += cd[i-1] + mp[i];
	}
	
	cout << (max_element(cd+1,cd+100001) - cd) << endl;
	
	return 0;
}
