#include <stdio.h>
#include <locale.h>

   
int main() {
    setlocale(LC_ALL, "RUS");
    int year;
    printf("Введите год (2001-2100): ");
    scanf_s("%d", &year);
    int k = year /100;  
    int f = 1+(((31*7)/12)+ year+(year/4)-k+(year/400));
    int a = f % 7;

    
    switch (a) 
    {
    case 0: 
        printf("1 сентября %d года приходится на: Воскресенье \n", year);
    case 1:
        printf("1 сентября %d года приходится на: Понедельник \n", year);        
    case 2: 
        printf("1 сентября %d года приходится на: Вторник \n", year);    
    case 3:
        printf("1 сентября %d года приходится на: Среда \n", year);
    case 4:
        printf("1 сентября %d года приходится на: Четверг \n", year);
    case 5: 
        printf("1 сентября %d года приходится на: Пятница \n", year);
    case 6: 
        printf("1 сентября %d года приходится на: Субботa \n", year);
        break;
    default:
        printf("Ошибка");
    }
    return 0;
}