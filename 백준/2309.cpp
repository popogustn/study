#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	
	
	int a[9];
	int sum = 0;
	int f[2];
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int temp;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int j = 0; j < 9; j++) {
		for (int c = j+1; c < 9; c++) {
			
			if ((sum-a[j]-a[c]) == 100) {
				f[0] = j;
				f[1] = c;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i != f[0] && i != f[1]) {
			cout << a[i] << endl;
		}
	}


}

