#include <stdio.h>
#include <locale.h>
#define D 2.54
#define S 2.7076
int main()
{
	int num1, num2;
	setlocale(LC_CTYPE, "RUS");
	puts("������ �����");
	scanf_s("%d", &num1);
	puts("������� ����� A");
	puts("�����nt �����");
	scanf_s("%d", &num2);
	puts("������� ����� B");
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d, � �������� = %d\n", num1, num2, num1 / num2, num1 % num2);
	int dym;
	float result;
	puts("������� �����");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d ������ � ��� %.1f ��\n", dym, result);
	int sdym;
	float _result;
	puts("������� �����");
	scanf_s("%d", &sdym);
	_result = S * sdym;
	printf("%d �������������� ������ � ��� %.1f ��\n", sdym, _result);
	float a, b;
	puts("������� �����");
	scanf_s("%f", &a);
	puts("������� �����");
	scanf_s("%f", &b);
	puts("_________________________\n");
	puts("| a*b\t | a+b\t | a-b\t|\n");
	puts("_________________________");
	printf("| %2.f*%2.f\t| %2.f+%2.f\t| %2.f-%2.f\t|\n", a, b, a, b, a, b);
	puts("_________________________\n");
	printf("| %3.f\t| %3.f\t | %3.f\t|\n", a * b, a + b, a - b);
	puts("_________________________\n");
	float v, p, d;
	printf("������� ����� ������: ");
	scanf_s("%f", &v);
	printf("������� ���������� ������: ");
	scanf_s("%f", &p);
	d = v * p / 100;
	printf("����� �� ������ ��������: %.2f\n", d);
}

		


