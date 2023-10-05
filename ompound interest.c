#include<stdio.h>
#include<math.h>
int main()
{
	float principle, time, rate, answer, power;
	printf("Enter the principle:");
	scanf("%f", &principle);
	printf("Enter the interest rate:");
	scanf("%f", &rate);
	printf("Enter the time in years:");
	scanf("%f", &time);
	rate=rate/100;
	power=12.0*time;
	answer=principle*(pow(1+(rate/12), power));
	printf("The compound amounr is %f\n", answer);
	printf("The compound interest is %f\n", answer-principle);
	return 0;
	
}
