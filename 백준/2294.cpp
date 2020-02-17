#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int num[110];
int dp[10010];
int n, k;

void coin(int abc, int cnt) {
	if (abc > k) return;

	
		if (dp[abc] > cnt) {
			dp[abc] = cnt;

			for (int i = 1; i < n + 1; i++) {
				coin(abc + num[i], cnt + 1);
			}
		}
	

	
}

int main() {

	cin >> n >> k;
	
	for (int i = 1; i < n+1; i++) {
		cin >> num[i];

	}

	for (int i = 0; i < 10011; i++) {
		dp[i] = 100000;

	}
	
	coin(0, 0);
	if (dp[k] == 100000)
		cout << -1 << endl;
	else
		cout << dp[k] << endl;

}