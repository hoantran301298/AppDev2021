// getscore.c in source file
#include "score.h"
//function definition for 
void input_scores(int s[]) {
	int i, input = 0;
	
	//using a sentinel-controlled loop to get input
	printf("Enter scores, -1 to end:\n");
	for(i = 0; i<MAX && input != -1; i++) {
		printf("scores %d: ", i+1);
		scanf("%d", &input);
		if( input > 100 || input < 0 )
		{
		 	printf("Invalid value, please enter again!\n");
			i-=1;
		}
		else s[i] = input;
	}
	s[i] = input;
}
