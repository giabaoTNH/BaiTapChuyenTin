#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int main() {
	int n; cin >> n;
	a.resize(n);
	for (int i = 0; i<n; i++) cin >> a[i];
	sort(a.begin(),a.end());
	if (n&1) cout << 1 << endl;
	else cout << abs(a[n/2]-a[(n-1)/2])+1 << endl;
}
	
