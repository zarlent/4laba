#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int A, B;

    printf("Введите значения датчиков A и B: ");
    scanf("%d %d", &A, &B);

    if ((A % 2) != (B % 2)) {
        printf("Сирена включена!\n");
    }
    else {
        printf("Сирена выключена.\n");
    }

    return 0;
}

