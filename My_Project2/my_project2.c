//Задание 1

/*

#include <stdio.h>
#include <locale.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) { // цикл n раз - по 1 на элемент
        for (j = 0; j < n - i - 1; j++) { // последние i элементы уже отсортированы
            if (a[j] > a[j + 1]) { // поменять местами, если порядок нарушен
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main() {
    int a[100], n, i, d, swap;

    setlocale(LC_ALL, "Russian");
    printf("Введите количество элементов в массиве:\n");
    scanf("%d", &n);
    printf("Введите %d целые числа \n ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble_sort(a, n);
    printf("Печать отсортированного массива:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}






//Задание 2
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        // Меняем символы местами
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Сдвигаем указатели
        start++;
        end--;
    }
}

int main() {
    char str[100]; // Массив для хранения строки

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin); // Читаем строку (включая пробелы)

    // Удаляем символ новой строки, если он есть
    str[strcspn(str, "\n")] = 0;

    reverseString(str); // Вызываем функцию для переворота строки

    printf("Перевернутая строка: %s\n", str); // Выводим результат

    return 0;
}
*/
//Задание 20

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int to_num(char* str, int base);


int program_00_21() {
    int num, base;
    char* str_num;
    printf("Input str number: ");
    if (read_str(&str_num) == 1) {
        return 1;
    }

    printf("Input base: ");
    read_number(&base);
    num = to_num(str_num, base);
    printf("Your number in %d numeral system is %d\n", base, num);

    free(str_num);
    return 0;
}

int to_num(char* str, int base) {
    int num = 0;
    int digit = 0;
    int minus = 0;




/*
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

//Задание 4
*/