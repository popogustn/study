#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;

int n;
int a[1001];
int d[1001];
int maxn = 0;
int main() {
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		cin >> a[i];
		d[i] = a[i];
	}
	

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < i + 1; j++) {
			if (a[i] > a[j] && (d[j] + a[i]) > d[i])
				d[i] = d[j] + a[i];
			
		}
		if (maxn < d[i])
			maxn = d[i];
	}

	cout << maxn;
}