#include <bits/stdc++.h>
using namespace std;

class BigNum {
public:
	string a = "";
	BigNum(long long x) {
		while(x>0) {
			a = (char)(x%10 + 48) + a;
			x/=10;
		}
	}
	BigNum(string s) {
		if (s.size() <= 0) a = "0";
		else {
			int i = 0;
			while(s[i] == '0') i++;
			for (;i< (int)(s.size()); i++) a+=s[i];
		}
	}
	BigNum() {
		a = "0";
	}
	
	BigNum operator+ (BigNum& b) {
		string ans = "";
		int carry = 0;
		string x = this->a;
		string y = b.a;
		while(x.size() < y.size()) x = '0' + x;
		while(y.size() < x.size()) y = '0' + y;
		
		int i = x.size() - 1;
		while(i >= 0) {
			int sum = (x[i]-48) + (y[i]-48) + carry;
			carry = sum/10;
			ans = (char)(sum%10 + 48) + ans;
			i-=1;
		}
		if (carry > 0) ans = '1' + ans;
		return BigNum(ans);
	}
	BigNum operator- (BigNum& b) {
		string ans = "";
		int carry = 0;
		string x = this->a;
		string y = b.a;
		while(x.size() < y.size()) x = '0' + x;
		while(y.size() < x.size()) y = '0' + y;
		
		int i = x.size() - 1;
		while(i >= 0) {
			int sum = (x[i]-48) + 10*(x[i] < y[i]) - (y[i]-48) - carry;
			carry = (x[i] < y[i]);
			ans = (char)(sum%10 + 48) + ans;
			i-=1;
		}
		if (carry > 0) ans = char(carry+48) + ans;
		return BigNum(ans);
	}
	bool operator== (BigNum& b) { 	return this->a == b.a;	}
	bool operator>= (BigNum &b) {
		string x = this->a;
		string y = b.a;
		while(x.size() < y.size()) x = '0' + x;
		while(y.size() < x.size()) y = '0' + y;
		return x >= y;
	}
	BigNum operator% (BigNum& b) {
		int k; string ans = "";
		string x = this->a;
		BigNum kb[11];
		kb[0].a = "0";
		for (int i = 1; i<= 10; i++) kb[i] = kb[i-1] + b;
		
		for (int i = 0; i< x.size(); i++) {
			ans = ans + x[i];
			k = 0;
			BigNum y(ans);
			while (y >= kb[k]) ++k;
			ans = (y - kb[k-1]).a;
		}
		return BigNum(ans);
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s; cin >> s;
	BigNum a(s);
	BigNum b(9);
	
	if ((a % b).a == "0") {
		cout << "So dep :>\n";
	} else cout << "So xau :<\n";
	
	return 0;
}
