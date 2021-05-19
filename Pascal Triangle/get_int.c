#include "pascal.h"

int get_int(int min, int max) {
	int t;
	do {
		printf("Enter your number between (%d, %d) : ", min, max);
		int r = scanf_s("%d", &t);
		if(r < 1) return 0;
	}	while (t < min || t > max);
	return t;
}
