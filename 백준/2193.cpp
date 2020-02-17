#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {

	long long int dp[100][2];

	int n;

	cin >> n;
	dp[1][1] = 1;
	dp[1][0] = 1;
	for (int i = 2; i < n+1; i++) {
		dp[i][1] = dp[i - 1][0];
		dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
	}
	cout << dp[n][1];
}


