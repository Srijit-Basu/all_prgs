#include<stdio.h>
int main()
{
	int p,h,b;
	printf("\nEnter Perpendicular of a triangle");
	scanf("%d",&p);
	printf("\nEnter Base of a triangle");
	scanf("%d",&b);
	printf("\nEnter Hypotenuse of a triangle");
	scanf("%d",&h);
	if((h*h)==((p*p)+(b*b)))
		printf("Triangle is a right angled triangle\n");
	else
		printf("Triangle isVNOT A right angled triangle !!!!\n");	
	return 0;	
}
	
