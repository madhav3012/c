#include<stdio.h>
#include<conio.h>
void main()
{
	int num[5],x=0;
	clrscr();
	printf("\n Input five number :");
	for(x=0;x<=4;x=x+1)
	{
		scanf("%d" ,&num[x]);
	}
	for(x=0;x<=4;x=x+1)
	{
		printf("\n%d",num[x]);
	}
	getch();
}