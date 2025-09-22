#include <stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("enter temprature in celsius");
	scanf("%f", &celsius);
	fahrenheit = (celsius*9/5)+32;
	printf("Temprature in Fahrenheit: %.2f\n", fahrenheit);
	return 0;
}
