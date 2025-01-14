#include <bits/stdc++.h>
using namespace std;

pair<int,int> a[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a,a+n);
	
	for (int i = 0; i<n; i++) {
		cout << a[i].first << ' ' << a[i].second << endl;
	}
	
	int i = 0;
	int ans =0;
	while(i < n) {
		if (i == n-1) {
			ans += a[i].second;
			break;
		}
		if (a[i].first + a[i].second - 1 < a[i+1].first) ans += a[i].second;
		else if (a[i].first + a[i].second - 1 >= a[i+1].first) {
			a[i+1].second = max(a[i+1].second + a[i+1].first - a[i].first, a[i+1].second);
			a[i+1].first = a[i].first;
		}
		i++;
	}
	
	cout <<ans << endl;
	
	return 0;
}
