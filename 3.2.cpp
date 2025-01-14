#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k; cin >> n;
	for (int i = 0; i<n;i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i<n-2; i++) {
		int j = i+1, k = n-1;
		while(j <= k) {
			if (a[i]+a[j]+a[k] == 0) {
				cout << i << ' ' << j << ' ' << k << endl;
				return 0;
			}
			if (a[i]+a[j]+a[k] < 0) {
				j+=1;
			}
			else if (a[i]+a[j]+a[k] > 0) {
				k-=1;
			}
		}
	}
	
	
	return 0;
}
