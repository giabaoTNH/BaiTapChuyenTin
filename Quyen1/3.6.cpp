#include <bits/stdc++.h>
using namespace std;

map<char,int> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin >> s;
	for (char c:s) mp[c]++;
	cout << mp.size() << endl;
	int ans = INT_MIN;
	char a;
	for (char c:s) if (mp[c] > ans) {
		ans = mp[c];
		a = c;
	}
	cout << a << ' ' << ans << endl;
	

	return 0;
}
