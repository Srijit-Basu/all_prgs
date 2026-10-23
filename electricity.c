#include<stdio.h>
int main()
{
	double units;
	double bill=0.0;
	do
	{
		printf("\n Enter total units consumed");
		scanf("%lf",&units);
		if(units<0)
			printf("\n Invalid Input.Units consumed cannot be negative(<0)\n");
	}while(units<0);
	if(units<=30)
		bill=0.0;
	else if(units<=60)
		bill=(units-30)*0.75;
	else if(units<=100)
		bill=(30*0.75)+((units-60)*1.5);
	else
		bill=(30*0.75)+(40*1.5)+((units-100)*2.0);
	printf("\n \t TOTAL BILL RECEIPT");
	printf("\n Units Consumed:%lf",units);
	printf("\n Total Amount of Bill:Rs%lf \n",bill);
	return 0;
}					
