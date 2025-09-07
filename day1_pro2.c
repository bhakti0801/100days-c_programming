// Write a program to input two numbers and display their sum, difference, product, and quotient.
// sum
#include<stdio.h>
int main(){
int a, b, sum, difference, product;
float quotient;
printf("enter two numbers:");
scanf("%d %d", &a, &b);
sum=a+b;
difference=a-b;
product=a*b;
if (b != 0){
	quotient= (float)a/b;
} else {
	printf("Division by 0 is not possible\n");
	quotient = 0;
} 
printf("sum: %d\n", sum);
printf("difference %d\n", difference);
printf("product %d\n", product);
if (b !=0 );
	printf("quoteint: %.2f\n", quotient);
return 0;
} 
