#include <bits/stdc++.h>
using namespace std;

bool first,x[1000];

void Try(int j, int m, string s, int sum) {
	if (!first) return;
	if (j >= s.size()) {
		if (sum == m) {
			for (int i = 0; i<s.size(); i++) cout << (x[i] ? '+' : '-') << s[i];
			first = false;
			cout << endl;
		}
		return;
	}
	
	x[j] = 0;
	Try(j+1,m,s,sum-s[j]+48);
	x[j] = 1;
	Try(j+1,m,s,sum+s[j]-48);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m; cin >> m;
	string s; cin >> s;
	
	first = true;
	Try(0,m,s,0);
	
	if (first == false) return 0;
	cout << -1 << endl;
	
	return 0;
}
