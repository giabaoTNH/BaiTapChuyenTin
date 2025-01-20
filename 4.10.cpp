#include <bits/stdc++.h>
using namespace std;

bool first;
int mat[100][100];
bool visited[100][100];
void Try(int n, int j, int x, int y) {
	if (!first) return;
	if (j >= n*n && first) {
		first = false;
		for (int i = 0; i<n; i++) {
			for (int j = 0; j<n; j++) {
				cout << mat[i][j] << '\t';
			}
			cout << endl;
		}
		cout << "--" << endl;
		return;
	}
	
	if (x < 0 || y < 0) return;
	if (x >= n || y >= n) return;
	if (visited[x][y]) return;
	visited[x][y] = true;
	mat[x][y] = j+1;
	
	Try(n,j+1,x+1,y+2);
	Try(n,j+1,x+1,y-2);
	Try(n,j+1,x-1,y+2);
	Try(n,j+1,x-1,y-2);
	Try(n,j+1,x+2,y+1);
	Try(n,j+1,x+2,y-1);
	Try(n,j+1,x-2,y+1);
	Try(n,j+1,x-2,y-1);
	
	visited[x][y] = false;
 }
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	first = true;
	for (int i = 0; i<100; i++) 
		for (int j = 0; j<100; j++) visited[i][j] = 0;
	int n; cin >> n;
	Try(n,0,0,0);
	return 0;
}
