#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int iValue = 0, iCount = 0, iSum = 0;
	float AVG = 0;

	while (1) {	
		scanf("%d", &iValue);
			if (getchar() == '\n') {
				iSum += iValue;
				iCount++;
				break;
			}
		iSum += iValue;
		iCount++;
	}

	AVG = (float) iSum / iCount;
	printf("%.1f", AVG);

	return 0;

}