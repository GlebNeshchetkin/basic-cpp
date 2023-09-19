#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	double result = calc(2.0);
	printf("%lf\n", result);
	result = calc(45.0);
	printf("%lf\n", result);
	result = calc(88.0);
	printf("%lf\n", result);
	result = calc(90.0);
	printf("%lf\n", result);
	return 0;
}