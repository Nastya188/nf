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
	printf("������� �������� ���� char:");
	scanf_s("%c", &c);
	printf("������� �������� ���� int:");
	scanf_s("%d", &i);
	printf("������� �������� ���� float:");
	scanf_s("%f", &f);
	printf("������� �������� ���� double:");
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
	printf("������� ����������� �����:");
	scanf_s("%d", &N);
	printf("��������� �����: %d\n, ������ - %d\n, ����� ���� - %d\n, �������� - %d%d%d\n,", N % 10 , N / 100,  (N / 100) + (N % 10) + (N % 100 - (N % 10))/10, N % 10, (N % 100 - (N % 10)) / 10, N / 100);
	
	
	float  a, x;
	printf("������� ����������� ����� a (�������� ������ 38):");
	scanf_s("%f", &a);
	printf("������� ����������� ��� � ���:");
	scanf_s("%f", &x);
	float b = (38 * x)+ ((a - 38) * (1.5 * x));
	printf("%.1f", b);

	




}