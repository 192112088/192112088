#include<stdio.h>
int main()
{
	float tax = 0, income;
	
	printf ("enter your income\n");
	scanf ("%f", &income);
	if(income<1)
	{
		printf("enter positive value \n");
	}
	if (income<150000)
    {
    	printf("no tax \n");
   	}
	 
	if (income >=150000 && income <= 300000)
	{
		tax = income/10 *  (income - 150000);
	}

    if (income >= 300001 && income <= 500000)
