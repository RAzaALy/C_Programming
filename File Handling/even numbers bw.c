#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	int l,u,x;
	system("color 0e");
	printf("Enter two numbers:\n");
	scanf("%d %d",&l,&u);
	printf("  Even numbers are:\n");
	for(x=l+1;x<=u-1;x++)
	{
		if(x%2==0)
		printf("%d ",x);
	}
	getch();
}
