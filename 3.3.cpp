#include <bits/stdc++.h>
using namespace std;

vector<string> strs;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s; cin >> s;
	int n = s.size();
	for (int i = 0; i< n; i++) {
		for (int j = i; j<n; j++) {
			string te = "";
			for (int k = i; k<=j; k++) te+=s[k];
			strs.push_back(te);
		}
	}
	sort(strs.begin(), strs.end());
	
	int m = strs.size();
	int i = 0;
	int d = 0;
	while(i < m) {
		d += 1;
		string prev = strs[i];
		while( i < m && strs[i] == prev) i++; 
	}	
	cout << d << endl;
	return 0;
}
