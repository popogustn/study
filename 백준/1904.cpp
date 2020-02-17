#include<iostream>
#include <cstdio>
#include<stdio.h>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int dp[1000001];
	dp[1] = 1;
	dp[2] = 2;
	cin >> n;

	for (int i = 3; i < n + 1; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2])%15746;
	}
	cout << dp[n] % 15746 << endl;
}