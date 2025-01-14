#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
	while (a.size() <b.size()) a = a + a[0];
	while(b.size() < a.size()) b = b + b[0];
	
	return (a > b);
}

string s[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> s[i];
	}
	
	sort(s,s+n,cmp);
	for (int i = 0; i<n; i++) cout << s[i];
	
	return 0;
}
