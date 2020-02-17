#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <cstdio>
char comp[101];
char carr[101][101];
int n, word[101];

int main()
{
	scanf("%s", comp);
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++) scanf("%s", carr[i]);
	int i;

	for (i = 0; comp[i] != '\0'; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (comp[i] == carr[j][0])
			{
				int type = 0, k, k1;
				for (k = i + 1, k1 = 1; carr[j][k1] != '\0'&&comp[k] != '\0' && !type; k++, k1++)
					if (comp[k] != carr[j][k1])
						type = 1;
				if (type)
					continue;
				if (carr[j][k1] == '\0' && ( (i > 0 && word[i - 1]) || i == 0) )
					word[k - 1] = 1;
			}
		}
	}
	printf("%d", word[i - 1]);
}
