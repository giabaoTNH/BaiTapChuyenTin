#include <bits/stdc++.h>
using namespace std;

int a[100005], b[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int n,m; cin >> n >> m;
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int i = 0; i<m; i++) cin >> b[i];
	
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (a[i] == b[j]) {
			cout << a[i] << ' ' << b[j] << ' ';
			i++;
			j++;
		}
		else if (a[i] > b[j]) {
			cout << b[j] << ' ';
			j++;
		}
		else if (a[i] < b[j]) {
			cout << a[i] << ' ';
			i++;
		}
	}
	while (i < n) {
		cout << a[i] << ' ';
		i++;
	}
	while (j < m) {
		cout << b[j] << ' ';
		j++;
	}
	cout << endl;
	
	return 0;
}
