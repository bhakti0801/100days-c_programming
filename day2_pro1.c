// to calculate area and perimeter  of rectangle 
#include <stdio.h>
int main(){
	int a=0,b=0;
	int area=0;
	int perimeter=0;
	
	
	printf("Enter 2 numbers:");
	scanf("%d %d",&a,&b);
area= a * b;
perimeter=2*(a+b);
printf("area %d\n",area);
printf("perimeter %d\n",perimeter);

return 0;
}
