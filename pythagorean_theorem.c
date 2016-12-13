#include<stdio.h>
#include<math.h>

main(){


	int a;
	int b;
	double c;
	
	printf("Enter value of a");
	scanf("%d", &a);
	
	printf("Enter value of b");
	scanf("%d", &b);
	
	c = sqrt((a^2) + (b^2));
	printf("The value of c is %lf", c);

}
