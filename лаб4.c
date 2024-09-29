#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c, %d, %.2ff, %.le\n", c, i, f, d);
	printf("Введите значение типа char:");
	scanf_s("%c", &c);
	printf("Введите значение типа int:");
	scanf_s("%d", &i);
	printf("Введите значение типа float:");
	scanf_s("%f", &f);
	printf("Введите значение типа double:");
	scanf_s("%lf", &d);
	printf("%d, %.2ff\n", (int)f, f - (int)f);
	printf("%x, %d\n", (int)c, (int)c);
	printf("%g\n", 1. / i);
	int a = 11;
	int b = 3;
	//int x = a/b;
	//float y = a/b;
	//double z = a/b;
	//printf("%d, %f, %lf\n", x, y, z);
	printf("%.f, %.f\n", (float)a/b, (double)a/b);
	int N;
	printf("Введите трехзначное число:");
	scanf_s("%d", &N);
	printf("Последняя цифра: %d\n, первая - %d\n, сумма цифр - %d\n, наоборот - %d%d%d\n,", N % 10 , N / 100,  (N / 100) + (N % 10) + (N % 100 - (N % 10))/10, N % 10, (N % 100 - (N % 10)) / 10, N / 100);
	

	




}