#include <bits/stdc++.h>
using namespace std;

int f(vector<int> &a, int x) {
	int sum = 0;
	int n = a.size();
	for (int i = 0; i<n; i++) sum+= abs(a[i]-x);
	return sum;
}
vector<int> a;
map<int,int> mp;
int main() {
	int n; cin >> n;
	a.resize(n);
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int i = 1;i<=1000000; i++) {
		int c = f(a,i);
		mp[c]++;
	}
	cout << mp.begin()->first << ' ' << mp.begin()->second << endl;
}
