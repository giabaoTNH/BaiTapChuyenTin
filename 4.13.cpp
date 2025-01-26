#include <bits/stdc++.h>
using namespace std;

vector<int> x;

void Try(int j,int sum, int n) {
	if (sum > n) return;
	if (sum == n) {
		for (int u:x) cout << u << ' ';
		cout << endl;
		return;
	}

	for (int i = 1; i<n; i++) {
		if (sum + i > n) return;
		x.push_back(i);
		Try(j+1,sum+i,n);
		x.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	Try(0,0,n);

	return 0;
}
