#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>

int ucln(int a, int b) {
	int t;
	while(b) {
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}
bool compare(ii a, ii b) {
	int u = a.first * b.second;
	int v = b.first * a.second;
	return u < v;
}
vector<ii > a;
vector<int> b;
map<ii, int> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k; cin >> n >> k;
	a.push_back(make_pair(0,1));
	for (int i = 1; i<=n; i++) {
		for (int j = 1; j<=i; j++) {
			int u = ucln(i,j);
			ii t = make_pair(j/u, i/u);
			if (mp[t] == 0) {
				mp[t]++;
				a.push_back(t);
			}
		}
	}
	sort (a.begin(), a.end(), compare);
	cout << a[k-1].first << '/' << a[k-1].second << endl;

	return 0;
}
