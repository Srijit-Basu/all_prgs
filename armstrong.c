#include<stdio.h>
#include<math.h>
int main()
{
	int num,num1,num2,count=0,i,sum=0;
	do
	{
		printf("Enter a positive number to be checked: ");
		scanf("%d",&num);
		if(num<0)
			printf("Negative input is INVALID !!!");
			
	}while(num<0);
	num1=num;
	num2=num;
	do
	{
		num=num/10;
		count++;
	}while(num!=0);
	for(i=0;i<=count;i++)
	{
		sum=sum+(int)pow(num1%10,count);
		num1=num1/10;
	}
	if(num2==sum)
		printf("%d is a Armstrong number",num);
	else
		printf("%d is not a Armstrong number",num); 
	return 0;	
}
