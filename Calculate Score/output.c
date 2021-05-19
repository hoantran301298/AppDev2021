// in SOURCE FILE

#include "score.h"

// this function will displayall valid marks as first part, and
// statistics of marks as second part

void output_results(int m[], int st[], int s[]){
	
	int i;
	printf("here are the marks:\n");
	for (i =0; i< MAX && s[i] != -1; i++) 
		printf("%3d", s[i]);
		puts("");
	for (i =0; i< MAX && m[i] != -1; i++) {
		printf("%3d", m[i]);
	}
	puts(""); // make a new line
	printf("Here are the statistics: \n");
	for (i=0; i< 6; i++) {
		printf("Marks %d: %d hits\n", i, st[i]);
	}
}
