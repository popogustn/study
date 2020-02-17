#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <cstdio>
#include <stdio.h>
using namespace std;

int main() {
	char temp[1000001];
	int cnt = 1;
	int flag = 0;
	int check = 0;

	while (scanf("%c", &temp[cnt]) != EOF) {
		if (temp[cnt] == ' ' || temp[cnt] =='\n') {
			flag = 0;
		}
		else {
			if (flag == 0) {
				check++;
			}


			flag = 1;

			
		}
		
		cnt++;
	}
	cout << check << endl;
}