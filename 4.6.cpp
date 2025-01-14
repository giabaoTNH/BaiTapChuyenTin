#include <bits/stdc++.h>
using namespace std;

int n;
int d;
string s;
bool x[10000];
string per[10000];
void Try(int j) {
	if (j >= n) {
		string str = "";
		for (int i = 0; i<n; i++) if (x[i]) str+= s[i];
		per[d++] = str;
		return ;
	}
	for (int i = 0; i<=1; i++) {
		x[j] = i;
		Try(j+1);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;
	n = s.size();
	d = 0;
	Try(0);
	
	sort(per, per+d);
	string prev = "";
	int m = 0;
	for (int i = 0; i<d; i++) {
		if (per[i] != prev) {
			m+=1;
			cout << per[i] << endl;
			prev = per[i];
		}
	}
	cout << m << endl;
	return 0;
}
