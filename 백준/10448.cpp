#include <iostream>
using namespace std;

int main() {

	int t;
	int se[55];
	int test[10000];
	se[1] = 1;
	se[2] = 3;
	for (int i = 3; i < 55; i++) {
		se[i] = i*(i + 1) / 2;
	}

	cin >> t;
	
	while (t > 0){

		int num;
		int flag = 0;
		cin >> num;

		for (int i = 0;i < 54; i++) {
			for (int j = 0; j <=i; j++) {
				for (int k = 0; k <=j; k++) {
					if (se[i] + se[j] + se[k] == num) {
						flag = 1;
						break;
					}

				
				}
				if (flag == 1)
					break;
			}
			if (flag == 1)
				break;
		}

		
		cout << flag << endl;

		t--;
	}

}