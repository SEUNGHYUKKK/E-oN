#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iValue[6];
	int iSum;
	float AVG;
	
	iSum = 0;

	for (int i = 0; i < 6; i += 1)
	{
		scanf("%d", &iValue[i]);
	}

	for (int i = 0; i < 6; i += 1)
	{
		iSum = iValue[i] + iSum;
	}

	AVG = iSum / 6;

	printf("%f", AVG);

	return 0;
}