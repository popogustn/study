#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstdio>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	long long int vw[101][3] = { 100001 };
	long long int dp[100001] = { 0 };


	for (int i = 1; i < n + 1; i++) {
		cin >> vw[i][1] >> vw[i][2];
	}
	dp[0] = 0;


	for (int i = 1; i < n + 1; i++) {
		for (int j = k; j >0; j--) {
			if(j-vw[i][1]>=0)
				dp[j] = max(dp[j - vw[i][1]] + vw[i][2], dp[j]);
		}
	}

	long long int fi = 0;

	for (int i = k; i > 0; i--) {
		fi = max(fi, dp[i]);
	}
	cout << fi;
	

}