#include<stdio.h>

int main(){
	
	int i, j, num;
	printf("Enter number: ");
	scanf("%d",&num);
	for(i=1; i<=num; i++){
		for(j=i; j<=num; j++){
			printf("*");
		}
		printf("\n");
	}
}
