#include "Prime.h"

void Prime::setValue(int a)
{
    prime = a;
}
bool Prime::isValid()
{
	for (size_t i = 2; i <= sqrt(prime); i++)
		if (prime % i == 0)
			return false;
	return true;
}
bool Prime::checkPrime(int a)
{
	for (size_t i = 2; i <= sqrt(a); i++)
		if (a % i == 0)
			return false;
	return true;
}
int Prime::countBetween(Prime& a)
{
	int count = 0;
	for (size_t i = fmin(prime,a.prime)+1; i < fmax(a.prime,prime); i++)
		if (checkPrime(i) == 1)
			count++;
	return count;
}
Prime Prime::nextPrime()
{
	Prime a;
	for (int i = prime+1; ; i++)
		if (checkPrime(i) == 1)
		{
			a.prime = i;
			return a;
		}
}
int Prime::getValue()
{
	return prime;
}