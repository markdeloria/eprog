#include<stdio.h>
int main(){
	
	int i, array[5], num_ones=0;
	for(i=0; i<5; i++){
		printf("Input 0s or 1s %d: ", i+1);
		scanf("%d", &array[i]);
	}
	for(i=0; i<5; i++){
		if(array[i] == 1){
			num_ones++;
		}
	}
	printf("Ones: %d\n", num_ones);
	printf("Zeroes: %d", 5-num_ones);
}
