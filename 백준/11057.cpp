#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int dp[1001][10];

	int n;
	cin >> n;
	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}


	for (int i = 2; i < n + 1; i++) {
		
		dp[i][0] = (dp[i - 1][0]) % 10007;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) % 10007;
		dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]+ dp[i - 1][2]) % 10007;
		dp[i][3] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3]) % 10007;
		dp[i][4] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4]) % 10007;
		dp[i][5] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5]) % 10007;
		dp[i][6] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6]) % 10007;
		dp[i][7] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7]) % 10007;
		dp[i][8] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7] + dp[i - 1][8])%10007;
		dp[i][9] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + dp[i - 1][4] + dp[i - 1][5] + dp[i - 1][6] + dp[i - 1][7] + dp[i - 1][8] + dp[i - 1][9]) % 10007;
	}
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += dp[n][i]%10007;
	}
	cout << sum % 10007;



}