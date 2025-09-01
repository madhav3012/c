#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,n,a,ci;
	clrscr();
	printf("input p :");
	scanf("%f",&p);
	printf("input r :");
	scanf("%f",&r);
	printf("input n :");
	scanf("%f",&n);
	a=p*pow((1+r/100),n);
	ci=a-p;
	printf("total amount : %f",a);
	printf("compound interest : %.2f",ci);
	getch();
}