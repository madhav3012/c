#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,n,si;
	clrscr();
	printf("input p:");
	scanf("%f",p);
	printf("input r:");
	scanf("%f",r);
	printf("input n");
	scanf("%f",n);
	si=(p*r*n)/100;
	printf("simple interst : %.2f",si);
	getch();
}
