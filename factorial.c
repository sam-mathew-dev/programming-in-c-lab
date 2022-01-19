#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,fact=1;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}

	printf("factorial of %d is %d",n,fact);
	getch();
}
