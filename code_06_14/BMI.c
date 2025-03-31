#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
	double w = 0;
	double h = 0;
	double BMI = 0;

	scanf("%lf%lf", &w, &h);

	h /= 100;
	BMI = w / pow(h, 2);
	printf("%.2lf", BMI);

	return 0;
}