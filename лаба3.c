#include <stdio.h>
#include <locale.h>
#define D 2.54
#define S 2.7076
int main()
{
	int num1, num2;
	setlocale(LC_CTYPE, "RUS");
	puts("¬вдите число");
	scanf_s("%d", &num1);
	puts("¬ведено число A");
	puts("¬ведеnt число");
	scanf_s("%d", &num2);
	puts("¬ведите число B");
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d, а остасток = %d\n", num1, num2, num1 / num2, num1 % num2);
	int dym;
	float result;
	puts("¬ведите число");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов Ц это %.1f см\n", dym, result);
	int sdym;
	float _result;
	puts("¬ведите число");
	scanf_s("%d", &sdym);
	_result = S * sdym;
	printf("%d старолитовских дюймов Ц это %.1f см\n", sdym, _result);
	float a, b;
	puts("¬ведите число");
	scanf_s("%f", &a);
	puts("¬ведите число");
	scanf_s("%f", &b);
	puts("_________________________\n");
	puts("| a*b\t | a+b\t | a-b\t|\n");
	puts("_________________________");
	printf("| %2.f*%2.f\t| %2.f+%2.f\t| %2.f-%2.f\t|\n", a, b, a, b, a, b);
	puts("_________________________\n");
	printf("| %3.f\t| %3.f\t | %3.f\t|\n", a * b, a + b, a - b);
	puts("_________________________\n");
	float v, p, d;
	printf("¬ведите сумму вклада: ");
	scanf_s("%f", &v);
	printf("¬ведите процентную ставку: ");
	scanf_s("%f", &p);
	d = v * p / 100;
	printf("ƒоход по вкладу составит: %.2f\n", d);
}

		


