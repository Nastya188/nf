#include <stdio.h>
#include <locale.h>
int N, K;
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("123\n");
	printf("1\n2\n3\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%d, %d, %d, %d\n", 1, 2, 3, 4);
	printf("%d,\n\t %d,\n\t\t %d,\n\t\t\t %d\n", 1, 2, 3, 4);
	printf("%10.3f\n ", 12.234657);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Деление % d на % d равен % d\n ", 7, 5, 7 / 5);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
	N = 14;
	K = 52;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N - 8) * 3600 + K * 60);
	printf("Текущий час  = %.f суток  и текущая минута = %.f часа\n", 14. / 24, 52 / 60);
}
int  n, L, k; 
int del()
{
	L = 373;
	n = 3;
	printf("Дано: \n\t%.3d \n\t%.3d\n", n, L);
	float k;
	k = n / L;
	printf("Ответ: \n\t%+2.2f", k);
}




