#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int yeas;
	double x;
	printf("Введите год:");
	scanf_s("%d", &yeas);
	printf("Остасток на 4: %d\n", yeas % 4);
	if (yeas % 4 == 0) 
		printf("Високосный год %d\n", yeas);
	else
		printf("Год %d не високосный\n", yeas);
	int yeas_2;
	printf("Введите год:");
	scanf_s("%d", &yeas_2);
	int A = yeas_2 % 4;
	int B = yeas_2 % 100;
	int C = yeas_2 % 400;

	if ((A == 0) && (B != 0) || (C == 0))  
		printf("Високосный год %d\n", yeas_2);
	else
		printf("Год %d не високосный\n", yeas_2);


	printf("Введите х:");
	scanf_s("%lf", &x);
	//F(1)=10
	//F(3)=0,38
	printf("F(%g) = %.3lf\n", x, x <= 2 ? (x * x + 4 * x + 5) : (1. / (x * x + 4 * x + 5)));

	int a;
	printf("Введите шестизнаначное число:");
	scanf_s("%d", &a);
	int b_1 = a / 100000;
	int c_2 = (a / 10000) % 10;
	int d_3 = (a / 1000 % 10);
	int i_4 = (a / 100) % 10;
	int f_5 = (a / 10) % 10;
	int g_6 = a % 10;
	
	if ((b_1 + c_2 + d_3) == (i_4 + f_5 + g_6))
		printf("Число %d является счастливым", a);
	else
		printf("Число %d не является счастливым", a);
	
}