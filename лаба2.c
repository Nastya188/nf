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
	printf("������� �� ������� %d �� %d ����� %d\n ", 5, 2, 5 % 2);
	printf("������� % d �� % d ����� % d\n ", 7, 5, 7 / 5);
	printf("��������� %d �� %d ����� %d\n ", 2000, 4, 2000 * 4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);
	printf("%d ��������� %d ����� %d\n ", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2);
	printf("%g ��������� %g ����� %g\n ", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n ", 5., 2., 5. / 2);
	N = 14;
	K = 52;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", K);
	printf("�� �������� �������� %d ����� � %d �����\n", 24 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 3600 + K * 60);
	printf("������� ���  = %.f �����  � ������� ������ = %.f ����\n", 14. / 24, 52 / 60);
}
int  n, L, k; 
int del()
{
	L = 373;
	n = 3;
	printf("����: \n\t%.3d \n\t%.3d\n", n, L);
	float k;
	k = n / L;
	printf("�����: \n\t%+2.2f", k);
}




