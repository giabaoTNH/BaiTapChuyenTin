#include <bits/stdc++.h>
using namespace std;

int a[100005],b[100005];
int main() {
	//Dpt O(n logn);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int j = 0; j<n; j++) cin >> b[j];
	
	sort(b,b+n);
	int start_pos = n;
	for (int i = 0; i<n; i++) if (b[i] >= 0) {
		start_pos = i;
		break;
	}
	
	int ans = INT_MAX;
	for (int i = 0; i<n; i++) {
		int low = lower_bound(b,b+n,-1*a[i]) - b;
		//cout << low << endl;
		if (low < n) {
			int x = abs(a[i]+b[low]);
			int y = abs(a[i]+b[low-1]);
			ans = min(ans,x);
			ans = min(ans,y);
		} else {
			ans = min(ans,a[i]+b[low-1]);
		}
	}
	cout << ans << endl;
	
	return 0;
}
