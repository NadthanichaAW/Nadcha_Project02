#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a, b, c, area;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a > b && c >= 0)
	{if (a > 0 && b > 0 && c >= 0)
		{
			area = 0.5 * c * (a + b);
			printf("Area of Trapezoid is %.2lf", area);
		}else
			printf("Error");
	}else if (b > a && c >= 0)
	{if (b > 0 && a > 0 && c >= 0)
		{
			area = 0.5 * c * (a + b);
			printf("Area of Trapezoid is %.2lf", area);
		}else
			printf("Error");
	}else
		printf("Error");
	return 0;
}