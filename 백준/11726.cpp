#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int dp[1001];
	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;


	for (int i = 3; i < n + 1; i++) {

		dp[i] = (dp[i - 1] + dp[i - 2])%10007;

	}

	cout << dp[n] << endl;
}