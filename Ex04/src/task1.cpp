#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iostream>
#include <string>
int comp1(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	if (*(int*)a == *(int*)b)
		return 0;
	if (*(int*)a > * (int*)b)
		return 1;
}

int comp2(const void* a, const void* b)
{
	if (*(double*)a < *(double*)b)
		return -1;
	if (*(double*)a == *(double*)b)
		return 0;
	if (*(double*)a > *(double*)b)
		return 1;
}

int comp3(const void* a, const void* b)
{return strcmp(*(char**)a, *(char**)b);}

int comp4(const void* a, const void* b)
{
	int lenA = strlen(*(char**)a);
	int lenB = strlen(*(char**)b);
	return (lenA - lenB);
}

int comp5(const void* a, const void* b)
{
	char* str1 = (*(char**)a);
	char* str2 = (*(char**)b);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int first = 0;
	int second = 0;
	for (int i = 0; i < l1; i++)
	{
		if (str1[i] == ' ')
			first++;
	}
	for (int i = 0; i < l2; i++)
	{
		if (str2[i] == ' ')
			second++;
	}
	return (first-second);
}

int comp6(const void* a, const void* b)
{
	unsigned first = (*(Person*)a).age;
	printf("%d\n", first);
	unsigned second = (*(Person*)b).age;
	printf("%d\n", second);
	printf("%d\n", first-second);
	return (first - second);
}