#include <stdio.h>
#include <math.h>
#include<locale.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
int main()
{
	setlocale(LC_ALL, "RUS");
	double gr, rd, sinn;
	printf("¬ведите число градусов: ");
	scanf_s("%lf", &gr);
	rd = (gr * M_PI) / 180;
	sinn = sin(rd);
	printf("—инус угла %.lf градусов: %.6lf\n", gr, sinn);
	double x, y, a, b, c = 1.3;
	printf("¬ведите значение x: ");
	scanf_s("%lf", &x);
	a = pow(c, 3) + log(fabs(x));
	b = pow(a, 2) + sqrt(c);
	y = exp(x) + pow(5.8, -b);
	printf("ответ: y = %.1lf\n", y);
	int a2, b2, y2;
	int A, B, C;
	printf("¬ведите значение a: ");
	scanf_s("%d", &a2);
	printf("¬ведите значение b: ");
	scanf_s("%d", &b2);
	printf("¬ведите значение y: ");
	scanf_s("%d", &y2);
	A = a2;
	B = b2;
	C = y2;

	int k = ((A % 2 == 0) && (B % 2 != 0) || (A % 2 != 0) && (B % 2 == 0));
	printf("”словие а) выполнено: %d\n", k);
	int h = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("”словие б) выполнено: %d\n", h);


	double x3 = -2.235 * pow(10, -2), y3 = 2.23, z = 15.221;
	double f = (exp(fabs(x3 - y3)) * pow(fabs(x3 - y3), x3 + y3)) / (atan(x3) + atan(z)) + pow((pow(x3, 6) + log(pow(y3, 2))), 1.0 / 3.0);
	printf("%.3lf",f);
}

