#include <bits/stdc++.h>
using namespace std;

vector<int> x;
int ans;

void Try(int j, int sum, int n) {
	if (sum > n) return;
	if (sum == n) {
		int prod = 1;
		for (int u:x) {
			cout << u << ' ';
			prod *= u;
		}
		cout << "; Prod: " << prod;
		ans = max(ans,prod);
		cout << endl;
		return;
	}

	int last = (x.size() ? x.back() : 0);
	for (int i = last+1; i < n; ++i) {
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
	ans = -1;
	Try(0,0,n);
	cout << ans << endl;

	return 0;
}
