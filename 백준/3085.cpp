#include <iostream>

using namespace std;
char bom[51][51];
int istrue(int a, int t) {
	if (a < t + 1) {
		return true;
	}
	else {
		return false;
	}
}
int countrow(int a, int t) {
	//C P Z Y
	int temp = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int tmax = 0;
	for (int i = 1; i < t + 1; i++) {
		if (bom[a][i] == 'C') {
			temp++;
		}
		else {
			if (tmax < temp)
				tmax = temp;
			temp = 0;
		}

		if (bom[a][i] == 'P') {
			temp1++;
		}
		else {
			if (tmax < temp1)
				tmax = temp1;
			temp1 = 0;
		}

		if (bom[a][i] == 'Z') {
			temp2++;
		}
		else {
			if (tmax < temp2)
				tmax = temp2;
			temp2 = 0;
		}

		if (bom[a][i] == 'Y') {
			temp3++;
		}
		else {
			if (tmax < temp3)
				tmax = temp3;
			temp3 = 0;
		}
		if (i == t) {
			if (tmax < temp3)
				tmax = temp3;
			if (tmax < temp2)
				tmax = temp2;
			if (tmax < temp1)
				tmax = temp1;
			if (tmax < temp)
				tmax = temp;
		}
	}
	return tmax;
}
int countcol(int b, int t) {
	//C P Z Y
	int temp = 0;
	int temp1 = 0;
	int temp2 = 0;
	int temp3 = 0;
	int tmax = 0;
	for (int i = 1; i < t + 1; i++) {
		if (bom[i][b] == 'C') {
			temp++;
		}
		else {
			if (tmax < temp)
				tmax = temp;
			temp = 0;
		}

		if (bom[i][b] == 'P') {
			temp1++;
		}
		else {
			if (tmax < temp1)
				tmax = temp1;
			temp1 = 0;
		}

		if (bom[i][b] == 'Z') {
			temp2++;
		}
		else {
			if (tmax < temp2)
				tmax = temp2;
			temp2 = 0;
		}

		if (bom[i][b] == 'Y') {
			temp3++;
		}
		else {
			if (tmax < temp3)
				tmax = temp3;
			temp3 = 0;
		}
		if (i == t) {
			if (tmax < temp3)
				tmax = temp3;
			if (tmax < temp2)
				tmax = temp2;
			if (tmax < temp1)
				tmax = temp1;
			if (tmax < temp)
				tmax = temp;
		}
		
	}
	return tmax;
}

int main() {

	int T;
	cin >> T;
	
	int max = 0;
	for (int i = 1; i < T + 1; i++) {
		for (int j = 1; j < T + 1; j++) {
			cin >> bom[i][j];
		}
	}
	

	for (int i = 1; i < T + 1; i++) {
		for (int j = 1; j < T + 1; j++) {
			char save;
			int rrr;
			
			if (istrue(i + 1, T) && bom[i+1][j] != bom[i][j]) { 
				save = bom[i][j];
				bom[i][j] = bom[i + 1][j];
				bom[i + 1][j] = save;

				rrr = countrow(i, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;
				rrr = countrow(i + 1, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;
				rrr = countcol(j, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;

				save = bom[i][j];
				bom[i][j] = bom[i + 1][j];
				bom[i + 1][j] = save;
			}
			if (istrue(j + 1, T) && bom[i][j+1] != bom[i][j]) {
				save = bom[i][j];
				bom[i][j] = bom[i][j+1];
				bom[i][j+1] = save;

				rrr = countcol(j, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;
				rrr = countcol(j + 1, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;
				rrr = countrow(j, T);
				if (max < rrr)
					max = rrr;
				rrr = 0;

				save = bom[i][j];
				bom[i][j] = bom[i][j + 1];
				bom[i][j + 1] = save;

			}
		}
	}


	cout << max;

}
