#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <memory.h>
using namespace std;
string temp;
char s[101];
char a[101][101];
int alen[101] = { 0 };
int slen = 0;

int n;
int hh = 0;
void hyunsu(int pos) {
	if (pos == slen) {
		hh = 1;
		return;
	}
	for (int i = 0; i < n; i++) {
		int flag = 0;
		for (int j = 0; j < alen[i]; j++) {
			if (a[i][j] != s[pos+j]) {
				flag = 1;
			}
		}
		if (flag == 0) {
			hyunsu(pos + alen[i]);
		}
		flag = 0;
	}
}
int main() {
	
	cin >> temp;
	
	slen = temp.length();
	for (int i = 0; i < slen; i++) {
		s[i] = temp[i];
	}
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		alen[i] = temp.length();
		for (int j = 0; j < alen[i]; j++) {
			a[i][j] = temp[j];
		}
	}
	int dp[101] ;
	/*
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < slen; i++) {
		if (dp[i] == -1) {
			for (int j = 0; j < n; j++) {
				int flag = 0;
				for (int k = 0; k < alen[j]; k++) {
					if (a[j][k] != s[i+k]) {
						flag = 1;
					}
				}
				if (flag == 0) {
					for (int k = 0; k < alen[j]; k++) {
						dp[i+k] = j;
					}
					break;
				}
				flag = 0;
			}
		}
	}
	int fflag = 0;
	for (int i = 0; i < slen; i++) {
		if (dp[i] == -1)
			fflag = 1;
	}
	if (fflag == 1)
		cout << "0";
	else
		cout << "1";
	*/
	hyunsu(0);
	cout << hh;
}