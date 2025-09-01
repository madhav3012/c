#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,num3,num4;
	clrscr();
	printf("enter numbers :");
	scanf("%d %d %d" , &num1,&num2,&num3,&num4);
	if(num1>num2 && num1>num3 && num1>num4)
	{
		printf("number 1 is greatest");
	}
       else if(num2>num1 && num2>num3 && num2>num4)
	{
		printf("number 2 is greatest");
	}
	else if(num3>num1 && num3>num2 && num3>num4)
	{
		printf("number 3 is greatet");
	}
	else
	{
		printf("number 4 is greatest");
	}
	getch();
}