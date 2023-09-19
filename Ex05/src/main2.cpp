#include "task2.h"
#include <typeinfo>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;



int main()
{
	const size_t n = 6;
	int val[n]{ 4, 3, 2, 2, 2, -1 };
	int result = ::averageArr(val, n);
}