#ifndef _PRIME_H
#define _PRIME_H_
#include<cmath>
//typedef unsigned int Prime;
#include <iostream>
using namespace std;
class Prime
{
private:
    unsigned int prime;
public:
    void setValue(int);
    bool isValid();
    bool checkPrime(int);
    int countBetween(Prime&);
    Prime nextPrime();
    int getValue();
};
#endif