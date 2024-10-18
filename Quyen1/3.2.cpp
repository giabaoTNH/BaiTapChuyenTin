#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Cau A)
	int n;cin>>n;a.resize(n);for(int i = 0;i<n;i++) cin >> a[i];
	for (int i = 0;i<n;i++) {
		auto aa = lower_bound(a.begin(),a.begin()+i,a[i]*(-1));
		if (*aa + a[i] ==0) cout << aa-a.begin()+1 << ' ' << i+1 << endl;
	}
	// Cau B)
	for (int i = 0;i<n-2;i++)
		for (int j = i+1;j<n-1;j++) {
			int x = (a[i]+a[j])*(-1);
			auto aa = lower_bound(a.begin()+j,a.end(),x);
			if (*aa==x) cout << i+1 << ' ' << j+1 << ' ' << aa-a.begin()+1 << endl;
		}

	return 0;
}
