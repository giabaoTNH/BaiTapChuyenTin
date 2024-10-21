#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int> mp;
int main() {
	string s; cin >> s;
	int n = s.size();
	for (int i = 0; i<n; i++) 
		for (int j = i; j<n; j++) {
			string st = "";
			for (int k = i; k<=j; k++) st+=s[k];
			mp[st]++;
		}
	cout << mp.size() << endl;
}

