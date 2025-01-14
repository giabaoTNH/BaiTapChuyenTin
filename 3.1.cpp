#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
	a = a + ' ';
	b = b+ ' ';
	string x = "";
	string y = "";
	string s = "";
	for (int i = 0; i<a.size(); i++) {
		if (a[i] == ' ') {
			x = ' ' + s + x;
			s = "";
			continue;
		}
		s = s+a[i];
	}
	s = "";
	for (int i = 0; i<b.size(); i++) {
		if (b[i] == ' ') {
			y = ' ' + s + y;
			s = "";
			continue;
		}
		s = s+b[i];
	}
	//cout << x << ' ' << y << endl;
	return (x<y);
}

vector<string> name;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	string s;
	getline(cin,s);
	for (int i = 0; i<n; i++) {
		getline(cin,s);
		name.push_back(s);
	}
	//cout << comp("Nguyen Viet An", "Ha Nguyen Gia Bao") << endl;
	sort(name.begin(), name.end(), comp);
	for (string s:name) {
		cout << s << endl;
	}
	
	return 0;
}
