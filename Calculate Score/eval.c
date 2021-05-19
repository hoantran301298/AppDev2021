//in SOURCE FILES
#include "score.h"

void evaluation(int s[], int m[]) {
	// we are evaluating each valid score into corresponding mark
	// a score is ranged from 0-100, any value below 30 is mark 0,
	// 30-45 mark 1, 45-60 mark 2, 60-75 mark 3, 75-90 mark 4, over 90 mark 5
	int i;
	for (i = 0; i < MAX && s[i] != -1; i++) {
			if(s[i] >= 0 && s[i]<30) m[i]=0;
			else if(s[i] >= 0 && s[i]<45) m[i]=1;
			else if(s[i] >= 0 && s[i]<60) m[i]=2;
			else if(s[i] >= 0 && s[i]<75) m[i]=3;
			else if(s[i] >= 0 && s[i]<90) m[i]=4;
			else if(s[i] >= 0 && s[i]<=100) m[i]=5;
			else printf("invalid score!\n");
	}
	printf("%d scores evaluated\n", i);
	m[i] = -1;

}
