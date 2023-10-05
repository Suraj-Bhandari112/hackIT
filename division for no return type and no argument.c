#include<stdio.h>
#include<conio.h>
void divide();
void divide()
{
	float a, b, d;
	printf("enter 2 nos.");
	scanf("%f%f", &a, &b);
	d=a/b;
	printf("division for 2 nos. is %f", d);
}
int main()
{
	divide();
	return 0;
	getch();
}
