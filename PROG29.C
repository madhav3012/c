#include<stdio.h>
#include<conio.h>
int addition();
void main()
{
	int z=0;
	clrscr();
	z=addition();
	printf("\n addition=%d",z);
	getch();
}

int addition()
{
	int x=0, y=0, z=0;
	printf("\n Input Two Numbers:");
	scanf("%d%d",&x,&y);
	z=x+y;
	return z;
}