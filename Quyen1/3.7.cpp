#include <bits/stdc++.h>
using namespace std;

vector<int> a,b;
int main() {
	int n,m;cin >> n >> m;	
	for (int i = 0; i<n+m; i++) {
		int temp; cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i<n+m;i++) cout << a[i] << ' ';
	cout << endl;
}
