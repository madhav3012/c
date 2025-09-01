#include<stdio.h>
#include<conio.h>
void main()
{
	int num=0, digit=0, sum=0;
	clrscr();
	printf("\n Input a number :");
	scanf("%d",&num);

	while(num>0)
	{
	digit=num %10;
	sum=sum+digit;
	num=num/10;
	}


	printf("\n sum of digits=%d", sum);
	getch();
}

