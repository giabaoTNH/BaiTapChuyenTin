#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//dpt: g*|S| => Tle
	
	int g, s; cin >> g >> s;
	string W,S; cin >> W >> S;
	
	sort(W.begin(), W.end());
	cout << W << endl;
	int ans = 0;
	for (int i = 0; i<S.size() - g + 1; i++) {
		string temp = "";
		for (int j = i; j<i+g; j++) temp = temp + S[j];
		sort(temp.begin(), temp.end()); if (temp == W) ans++;
	}
	
	cout << ans << endl;
	
	
	return 0;
}
