#include <stdio.h>
#include <locale.h>
/*
int main() {
    unsigned int a; // Исходное число
    int k;          // Номер бита

    setlocale(LC_ALL, "Russian");

    // Ввод числа и номера бита
    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите номер бита k (начиная с 0): ");
    scanf("%d", &k);

    // Проверка на допустимость номера бита
    if (k < 0 || k >= sizeof(a) * 8) {
        printf("Ошибка: номер бита вне допустимого диапазона.\n");
        return 1;
    }

    // Извлечение k-го бита
    unsigned int bit = (a >> k) & 1;

    // Вывод результата
    printf("k-ый бит числа a: %u\n", bit);

    return 0;
}
*/