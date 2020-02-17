#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> num;
	int n;
	cin >> n;
	num.resize(n + 1, -1);
	num[1] = 0;
	
	int temp1,temp2,temp3;

	for (int i = 2; i < n + 1; i++) {
		temp1 = 999999999;
		temp2 = 999999999;
		temp3 = 999999999;
		if (i % 3 == 0)
			temp1 = num[i / 3] + 1;
		if (i % 2 == 0)
			temp2 = num[i / 2] + 1;
		temp3 = num[i - 1] + 1;

		num[i] = min(temp3, min(temp1, temp2));
		
	}
	cout<< num[n];
}