#ifndef TASK1_H
#define TASK1_H

#include<cstring>
#include<iostream>

template<typename T>
bool less(T a, T b) {
	return (a < b) ? true : false;
}

template<>
bool less<char*>(char* a, char* b) {

	if (strcmp(a, b) >= 0) {
		return false;
	}
	else {
		return true;
	}
}
#endif 