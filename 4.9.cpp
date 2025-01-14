#include <bits/stdc++.h>
using namespace std;

string per[100005];
string s;
int n;
int d;
bool visited[1000];
int x[1000];

void Try(int j) {
	if (j >= n) {
		string str = "";
		for (int i = 0; i<n; i++) str+=s[x[i]];
		per[d++] = str;
		return;
	}
	for (int i = 0; i<n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			x[j] = i;
			Try(j+1);
			visited[i] = false;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;
	n = s.size();
	
	for (int i = 0; i<=n; i++) visited[i] = false;
	
	d = 0;
	Try(0);
	
	sort(per, per+d);
	string prev = "";
	
	for (int i = 0; i<d; i++) {
		if (prev != per[i]) {
			cout << per[i] << endl;
			prev = per[i];
		}
	}	
	return 0;
}
