#include "appdev.h"

int main(void) {
	rock r;      // declatre an instance of rock 
	printf("Application Developers Rock \n");
	printf("Enter Rocker's name : ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	srand(time(NULL));
	r.max = rand() % 50 + 51;        // max
	r.min = rand() % 50 + 1;         //min 
	Send_data(r);
	printf("Rockn'Roll\n");
	return 0;
}