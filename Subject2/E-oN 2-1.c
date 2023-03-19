#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int iValue, iCount;

	scanf("%d", &iValue);

	for (iCount = 1; iCount <= 9; iCount++)
	{
		printf("%d * %d = %d\n", iValue, iCount, iValue * iCount);
	}

	return 0;
}