#include<stdio.h>
#include<conio.h>
int multiply();
int multiply()
{
	int a,b,c, m;
	printf("enter nos.");
	scanf("%d%d%d", &a,&b,&c);
	m=a*b*c;
	return m;
}
int main()
{
	int m1;
	m1=multiply();
	printf("multiply of nos. is %d", m1);
	return 0;
}
