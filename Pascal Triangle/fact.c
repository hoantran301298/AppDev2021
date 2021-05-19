#include "pascal.h"

long long int fact(long int i) {
	long long int j, k = 1;
	for (j = 1; j <= i; j++) {
		k *= j;
	}
	return k;
}
