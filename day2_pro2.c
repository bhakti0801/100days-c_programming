// calculating area and circumference of circle
#include<stdio.h>
int main(){
int r;
float pi=3.14;
float area = 0;
float circumference = 0;
printf("enter the value of r");
scanf("%d", &r);
area= pi*r*r;
circumference = 2*pi*r;
printf("area %.2f\n", area);
printf("circumference %.2f\n", circumference);
return 0;
}
