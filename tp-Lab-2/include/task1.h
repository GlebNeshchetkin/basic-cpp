#ifndef TASK1_H
#define TASK1_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <utility>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
//using namespace std;
//template<class T> bool less(T a, T b)
template <typename T> void msort(T* a, int n)
{
    int mid = (n + n % 4) / 2;
    if (n % 2 == 1)
        mid++;

    int h = 1;

    T* c = (T*)malloc(n * sizeof(T));
    int step;
    while (h < n)
    {
        step = h;
        int i = 0;
        int j = mid;
        int k = 0;
        while (step <= mid)
        {
            while ((i < step) && (j < n) && (j < (mid + step)))
            {
                if (a[i] < a[j])
                {
                    c[k] = a[i];
                    i++; k++;
                }
                else {
                    c[k] = a[j];
                    j++; k++;
                }
            }
            while (i < step)
            {
                c[k] = a[i];
                i++; k++;
            }
            while ((j < (mid + step)) && (j < n))
            {
                c[k] = a[j];
                j++; k++;
            }
            step = step + h;
        }
        h = h * 2;
        for (i = 0; i < n; i++)
            a[i] = c[i];
    }
}
//template<typename T>

template<> void msort<>(char** a, int n)
{
    int mid = (n + n % 4) / 2;
    if (n % 2 == 1)
        mid++;

    int h = 1;
    char** c = (char**)malloc(n * sizeof(char*));
    int step;
    while (h < n)
    {
        step = h;
        int i = 0;
        int j = mid;
        int k = 0;
        while (step <= mid)
        {
            while ((i < step) && (j < n) && (j < (mid + step)))
            {
                if (strlen(a[i]) < strlen(a[j]))
                {
                    c[k] = a[i];
                    i++; k++;
                }
                else {
                    c[k] = a[j];
                    j++; k++;
                }
            }
            while (i < step)
            {
                c[k] = a[i];
                i++; k++;
            }
            while ((j < (mid + step)) && (j < n))
            {
                c[k] = a[j];
                j++; k++;
            }
            step = step + h;
        }
        h = h * 2;
        for (i = 0; i < n; i++)
            a[i] = c[i];
    }
}
#endif