#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	int hour, sec, min;
	
	printf("input second :");
	scanf("%i", &input);
	
	hour = input/3600;
	min = (input%3600)/60 ; //second minus = input%3600
	sec = input%60; 
	
	printf("the time for %i second is %i : %i : %i", input, hour, min, sec);

	return 0;
}
