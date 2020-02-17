#include <iostream>
using namespace std;

int main() {
	int test;
	int flag = 0;
	cin >> test;
	int n=0;
	int testtemp = 0;
	for (int i = 0; i < test; i++) {
		testtemp = i;
		n = i;

		n += testtemp / 1000000;
		testtemp = testtemp % 1000000;

		n += testtemp / 100000;
		testtemp= testtemp % 100000;

		n += testtemp / 10000;
		testtemp = testtemp %  10000;

		n += testtemp / 1000;
		testtemp = testtemp % 1000;

		n += testtemp / 100;
		testtemp = testtemp % 100;

		n += testtemp / 10;
		testtemp = testtemp % 10;

		n += testtemp;



		if (n == test) {
			cout<< i;
			flag = 1;
			break;
		}
		
	}
	if (flag == 0) {
		cout<< flag;
	}
	
}