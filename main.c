# include <stdio.h>
# include "myMath.h"

int main() 
{
	double x;
	printf("Please insert a real number: ");
	scanf("%lf/n", &x);
	double s1 = sub(add(Exp(x), Pow(x, 3)), 2);
	double s2 = add(mul(x, 3), mul(Pow(x, 2), 2));
	double s3 = sub(div(mul(Pow(x, 3), 4), 5), mul(x, 2));
	printf("The value of f(x) = e^x + x^3 − 2 at the point x = %.4f is: %.4f \n", x, s1);
	printf("The value of f(x) = 3x + 2x ^ 2 at the point x = %.4f is: %.4f \n", x, s2);
	printf("The value of f(x) = (4x ^ 3) / 5 - 2x at the point x = %.4f is: %.4f \n", x, s3);
}