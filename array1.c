#include <stdio.h>
int main(){
	int i, sum=0, grades[3];
	float average = 0.0;
	
	for(i = 0; i < 3; i++)
    {
    printf("Enter number %d: ", i+1);
	scanf("%d", &grades[i]);
	sum += grades[i];
	}
	average = sum / 3;
	printf("Average = %f", average);
	if(average >= 75){
		printf("\nPass");
	}else{
		printf("\nFail");
	}
}
