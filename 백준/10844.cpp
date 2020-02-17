#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {

	//1자리 1~9            9
	//2자리 1~8 *2 + 9*1        16+1
	//3자리 0,9 *1 + 1~8*2   

	long long int dp[101][10] = { 0 };
	int n;
	int temp = 1000000000;
	cin >> n;

	dp[1][1] = 1;
	dp[1][2] = 1;
	dp[1][3] = 1;
	dp[1][4] = 1;
	dp[1][5] = 1;
	dp[1][6] = 1;
	dp[1][7] = 1;
	dp[1][8] = 1;
	dp[1][9] = 1;
	
	for (int i = 2; i < n + 1; i++) {
		
		dp[i][0] = dp[i - 1][1]%temp;
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % temp;
		dp[i][2] = (dp[i - 1][1] + dp[i - 1][3]) % temp;
		dp[i][3] = (dp[i - 1][2] + dp[i - 1][4]) % temp;
		dp[i][4] = (dp[i - 1][3] + dp[i - 1][5]) % temp;
		dp[i][5] = (dp[i - 1][4] + dp[i - 1][6]) % temp;
		dp[i][6] = (dp[i - 1][5] + dp[i - 1][7]) % temp;
		dp[i][7] = (dp[i - 1][6] + dp[i - 1][8]) % temp;
		dp[i][8] = (dp[i - 1][7] + dp[i - 1][9]) % temp;
		dp[i][9] = dp[i - 1][8] % temp;

	}

	long long int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += dp[n][i];
	}
	cout << sum % temp;
}
