#include <iostream>
using namespace std;


int num[1010][110];

int istrue(int temp, int s, int b,int c) {
	int temp1, temp2, temp3;
	temp1 = temp / 100;
	temp2 = (temp % 100) / 10;
	temp3 = temp % 10;

	
	for (int i = 1; i < c + 1; i++) {
		int cts = 0;
		int ctb = 0;


		if (num[i][0] / 100 == temp1)
			cts++;
		if ((num[i][0] % 100) / 10 == temp2)
			cts++;
		if (num[i][0] % 10 == temp3)
			cts++;
	

		if ((num[i][0] % 100) / 10 == temp1 || (num[i][0] % 100) / 10 == temp3)
			ctb++;
		if (num[i][0] / 100 == temp2 || num[i][0] / 100 == temp3)
			ctb++;
		if (num[i][0] % 10 == temp1 || num[i][0] % 10 == temp2)
			ctb++;

		if (cts != s || ctb != b)
			num[i][1] = 0;
	}
	return 0;
}


int main() {
	int count = 1;
	
	for (int j = 1; j < 10; j++) {
		for (int k = 1; k < 10; k++) {
			if (k != j) {
				for (int l = 1; l < 10;l++) {
					if (l != k && l!=j) {
						num[count][0] = (100 * j) + (10 * k) + l;
						num[count][1] = 1;
						count++;
					}

				}
			}
		}
	}


	int t;
	cin >> t;
	int a, b, c;
	int temp, st, ba;
	

	for (int i = 1; i < t+1; i++) {
		cin >> temp >> st >> ba;
	

		istrue(temp, st, ba, count);

		
	
	}
	int fc = 0;
	for (int i = 1; i < count+1; i++) {
		if (num[i][1] == 1) {
			fc++;
		}
	}
	cout << fc<<endl;
}
