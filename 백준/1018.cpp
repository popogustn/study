#include <iostream>
using namespace std;
int n, m;
char allbox[55][55];
char chess[9][9];

int wbox(int x, int y) {
	int count=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (allbox[x + i][j + y] != chess[i + 1][j + 1]) {
				count++;
			}

		}
	}
	return count;
}
int bbox(int x, int y) {
	int count=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (allbox[x + i][j + y] == chess[i + 1][j + 1]) {
				count++;
			}

		}
	}
		return count;
}

int main() {
	for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			
			if (j % 2 == 0 && i % 2 == 1) {
				chess[i][j] = 'B';
			}
			else if (i % 2 == 0 && j % 2 == 1) {
				chess[i][j] = 'B';
			}
			else
				chess[i][j] = 'W';
		}
	}
	
	cin >> n >> m;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			cin >> allbox[i][j];
		}
	}
	int min = n * m;
	
	for (int i = 1; i < n - 8 + 1 + 1; i++) {
		for (int j = 1; j < m - 8 + 2; j++) {
			//if (allbox[i][j] == 'W') {
				int temp = wbox(i, j);
				if (min > temp)
					min = temp;
			//}
			//if (allbox[i][j] == 'B') {
				temp = bbox(i, j);
				if (min > temp)
					min = temp;
			//}
		}
	
	}
	cout << min;
	
}