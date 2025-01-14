#include <bits/stdc++.h>
using namespace std;

int a[100005];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n; cin >> n;
	for (int i = 0;i<n; i++) {
		cin >> a[i];
	}
	
	sort(a, a+n);
	
	cout << "So bat ki: " << a[n/2] << endl;
	cout << "Cac so thoa dieu kien: " << endl;
	for (int i = a[(n-1)/2]; i <= a[(n)/2];i++) {
		cout << i << ' ';
	} 
	cout << endl;
	
	return 0;
}
