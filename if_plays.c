#include<stdio.h>
int main(){
	int number;
 	
	printf("Enter number:");
	scanf("%d", &number);
	if (number%3 == 0)
		printf("Pogi");
	if (number%5 == 0)
		printf("Ed");
	if(number%3 == 0 && number%5 == 0)
		printf("Ed Pogi");
	
}
