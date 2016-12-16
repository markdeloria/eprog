#include<stdio.h>
#include<math.h>
 
int main() {
 float fahrenheit, celsius;
 
 printf("Enter temp in Fahrenheit");
 scanf("%f", &fahrenheit);
 
 celsius = (5.0/9.0)*(fahrenheit-32);
 printf("Temperature in Celsius : %f", celsius);
 
 return 0;
}
