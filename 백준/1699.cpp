#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {

	int dp[100001];
	int n;
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 1;
	dp[5] = 2;
	dp[6] = 3;
	
	for (int i = 7; i < n + 1; i++) {
		int temp = 100000;
		for (int j = 2; j*j <= i; j++) {
			temp = min(temp, dp[i - j * j]);
			
		}
		dp[i] = temp + 1;
	}
	cout << dp[n];
}