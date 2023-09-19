#ifndef TASK2_H
#define TASK2_H

#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;


template <typename T>
int averageArr(T& a, int b)
{
	double sum = 0;
	for (size_t i = 0; i < b; ++i)
	{
		sum += a[i];
	}
	return(sum / b);
}
#endif 