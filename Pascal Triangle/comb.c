#include "pascal.h"

long long int comb(long int n, long int m) {
	if(n < m) return 0;
	return fact(n)/(fact(n-m) * fact(m));
}
