#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;
void A() {
	for (int i = 1; i<n; i++) {
		int l = 0; int r = i-1;
		int x = (-1)*a[i];
		bool found = false;
		int ind = -1;
		while(l<=r) {
			int m = l+(r-l)/2;
			if (a[m] == x) {
				found = true;
				ind = m;
				break;
			}
			if (a[m] < x) l = m+1;
			if (a[m] > x) r = m-1;
		}
		if (found) {
			cout << ind+1 << ' ' << i+1 << endl;
			return;
		}
	}
}

void B() {
	for (int i = 1; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			int x = (-1)*(a[i]+a[j]);
			int l = 0; int r = i-1;
			bool found = false;
			int ind = -1;
			while(l<=r) {
				int m = l+(r-l)/2;
				if (a[m] == x) {
					found = true;
					ind = m;
					break;
				}
				if (a[m] < x) l = m+1;
				if (a[m] > x) r = m-1;
			}
			if (found) {
				cout << ind+1 << ' ' << i+1 << ' ' << j+1 << endl;
				return;
			}
		}
	}
}

void C() {
	int i = 0; int j = n-1;
	while(i < j) {
		if (a[i] == (-1)*a[j]) {
			cout << i+1 << ' ' << j+1 << endl;
			return;
		}
		if (a[i] > (-1)*a[j]) i++;
		else if (a[i] < (-1)*a[j]) j--;
	}
}

void D() {
	for (int i = 0; i<n-2; i++) {
		int l = i+1; int r = n-1;
		while(l<r) {
			if (a[l] == (-1)*(a[i]+a[r])) {
				cout << i+1 << ' ' << l+1 << ' ' << r+1 << endl;
				return;
			}
			if (a[l] < (-1)*(a[i]+a[r])) r--;
			else l++;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	a.resize(n);
	for (int &x:a) cin >> x;

	// A: T(n) = O(nlogn): Tim kiem nhi phan
	A();
	// B: T(n) = O(n2 log n): Tim kiem nhi phan
	B();
	// C: T(n) = O(n) : Hai con tro:
	C();
	// D: T(n) = O(n2): Hai con cho;
	D();
	

	return 0;
}
