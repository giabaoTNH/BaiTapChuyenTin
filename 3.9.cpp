#include <bits/stdc++.h>
using namespace std;


int x[100005], y[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0; i<n ;i++) {
		cin >> x[i] >> y[i];
	}
	sort(x, x+n);
	sort(y, y+n);
	cout << x[(n-1)/2]  << ' ' << y[(n-1)/2] << endl;
	
	return 0;
}
