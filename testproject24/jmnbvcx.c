#define _USE_MATH_DEFINES
#include <math.h>

#include <limits.h>
#include <float.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	double x, y, z, b;
	printf("\n ¬ведите х = ");
	scanf_s("%lf", &x);
	printf("\n ¬ведите y = ");
	scanf_s("%lf", &y);
	z = 2 * sin(3 * x + y);
	printf("\n z = %lf", z);
	b = newbranchchanges / (y * (x - z) + log(fabs(x * z)));
	printf("\n b = %lf", b);//bad comments
	//changed comments
	_getch();
}
