#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	
	printf("input year :");
	scanf("%i", &input);
	
	printf("the year %i the leap year? : %i", input,(input%4==0 && input%100!=0)||(input%400==0));

	return 0;
}
