#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <memory.h>
using namespace std;

int t, m, n, k;
int dfs[51][51];
void hh(int i, int j, int num) {
	dfs[i][j] = num;
	
	if (i - 1 >= 0 && i - 1 < n) {	// i-1,j
		if (dfs[i - 1][j] == 1) {
			
			hh(i - 1, j, num);
			
		}
	}
	if (i + 1 >= 0 && i + 1 < n) { //i+1,j
		if (dfs[i + 1][j] == 1) {
			
			hh(i + 1, j, num);
		}
	}
	if (j - 1 >= 0 && j - 1 < m) {	//i,j-1
		if (dfs[i][j - 1] == 1) {
			
			hh(i, j-1, num);
		}
	}
	if (j + 1 >= 0 && j + 1 < m) { //i,j+1
		if (dfs[i][j + 1] == 1) {
			
			hh(i, j+1, num);
	
		}
	}
	

}

int main() {

	

	

	cin >> t;
	while (t > 0) {
		cin >> m >> n >> k;

		memset(dfs, 0, sizeof(dfs));
		int x, y;
		for (int i = 1; i < k + 1; i++) {
			cin >> x >> y;
			dfs[y][x] = 1;

		}
		int num = 1;
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dfs[i][j] == 1) {
					num++;
					hh(i, j, num);
				}

			}
		}

		cout << num - 1 << endl;
		t--;
	}
}