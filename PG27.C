#include<stdio.h>
#include<conio.h>
void addi(int x,int y);
void main()
{
	int x=0,y=0;
	clrscr();
	printf("enter two number:");
	scanf("%d %d",&x,&y);
	printf("\nsubtraction : %d",x-y);
	addi(x,y);
	printf("\nmultipiction :%d",x*y);
	addi(x,y);
	getch();

}
void addi(int x,int y)
{
	int z=0;
	z=x+y;
	printf("\naddition : %d",z);

}