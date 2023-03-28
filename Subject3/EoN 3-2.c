#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int iValue = 0, iQuotient = 0, iRemainder = 0, iQuoRem = 0;
	
	scanf("%d", &iValue);

	iValue -= 1;
	iQuotient = iValue / 5;
	iRemainder = iValue % 2;
	iQuoRem = iQuotient % 2;

	if (iValue == -1 || iValue == 0 || iValue == 1 || iValue == 3 || iValue == 6) {
		printf("%d", -1);
	}
	else {
		if (iQuoRem == 1) {
			if (iRemainder == 1)
			{
				printf("%d", iQuotient + 1);
			}
			else
			{
				printf("%d", iQuotient + 2);
			}
		}
		else {
			if (iRemainder == 1)
			{
				printf("%d", iQuotient + 2);
			}
			else
			{
				printf("%d", iQuotient + 1);
			}
		}
	}

	return 0;

}