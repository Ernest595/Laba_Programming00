#define _CRT_SECURE_NO_WARNINGS

//Задание 3

#include <stdio.h>
#include <locale.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    setlocale(LC_ALL, "Russian");

    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);

    // Вывод значений до обмена
    printf("До обмена: num1 = %d, num2 = %d\n", num1, num2);


    swap(&num1, &num2);

    // Вывод значений после обмена
    printf("После обмена: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


