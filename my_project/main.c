#define _CRT_SECURE_NO_WARNINGS


       

/*


//задание 1
#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    printf(" %d\n", i % 2);
    return 0;
}







//задание 2 
#include <stdio.h>
#include <locale.h>

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


//Задание 3
#include <stdio.h>

void setKthBit(int *n, int k) {
    *n |= (1 << k);
}

int main() {
    int n, k;

    printf("Введите число n: ");
    scanf("%d", &n);

    printf("Введите номер бита k: ");
    scanf("%d", &k);

    setKthBit(&n, k);

    printf("Число после установки %d-го бита: %d\n", k, n);

    return 0;
}

//Задание 4
#include <stdio.h>
#include <locale.h>

int bit(int a, int k) {
    // Создаем маску: 1 сдвигаем влево на k позиций и инвертируем
    int mask = ~(1 << k);
    // Операция И с инверсией маски удаляет k-й бит из числа a
    return a & mask;
}

int main() {
    int a, k;

    setlocale(LC_ALL, "Russian");

    // Ввод числа и номера бита
    printf("Введите число a: ");
    scanf("%d", &a);
    printf("Введите номер бита k для снятия (начиная с 0): ");
    scanf("%d", &k);

    // Снимаем k-й бит
    int result = bit(a, k);

    // Выводим результат
    printf("Число после снятия %d-го бита: %d\n", k, result);

    return 0;
}


//Задание 5
#include <stdio.h>

int swap(int n, int i, int j);


int main() {
    int n, i, j;
    // Ввод числа и индексов битов
    printf("Введите число n: ");
    scanf("%d", &n);
    printf("Введите индекс i: ");
    scanf("%d", &i);
    printf("Введите индекс j: ");
    scanf("%d", &j);

    printf("New number: %d\n", swap(n, i, j));

    return 0;
}


int swap(int n, int i, int j) {
    int i_bit = n & (1 << i);
    int j_bit = n & (1 << j);
    if (i_bit != j_bit) {
        n = n ^ (1 << i);
        n = n ^ (1 << j);
    }

    return n;
}


//Заданеи 6
#include<stdio.h>

int div(int number, int k) {

    int mask = (1 << k) - 1;

    return number & ~mask;

}

int main(){
    int number;
    int k;

    printf("Выведите число:");
    scanf("%u", &number);
    printf("Выведите количество младших бит для обнуления (k):");
    scanf("%d", &k);

    unsigned int result = div(number, k);
    printf("Результат: %d\n", result);

    return 0;
}
 

//Задание 7
#include <stdio.h>


int swap_bytes(int n, int i, int j);


int main() {
    int n, i, j;
    printf("Input a number: ");
    scanf(&n);
    printf("Input first byte number: ");
    scanf(&i);
    printf("Input second byte number: ");
    scanf(&j);
    n = swap_bytes(n, i, j);
    printf("New number: %d\n", n);
    return 0;
}


int swap_bytes(int n, int i, int j) {
    char* bytes_array = (char*)&n;
    char buf = bytes_array[i];
    bytes_array[i] = bytes_array[j];
    bytes_array[j] = buf;
    return n;
}


//Задание 8

#include <stdio.h>
#include <math.h>


int max_div(int n, int div);


int main() {
    int n;
    printf("Input a number: ");
    scanf(&n);

    int ans = max_div(n, pow(2, sizeof(int) * 8 - 2));
    printf("max pow of 2 is : %d\n", ans);
    return 0;
}


int max_div(int n, int div) {
    if (n % div == 0) {
        return div;
    }
    else {
        return max_div(n, div / 2);
    }
}



//Задание 9
#include <stdio.h>



int xor_all_digits(int n);

int main() {
    int n;
    scanf("%d", &n);

    int an= xor_all_digits(n);
    printf("XOR all digits result: %d\n", an);
    return 0;
}


int xor_all_digits(int n) {
    int an = n % 2;
    n /= 2;
    while (n > 0) {
        an = an ^ (n % 2);
        n /= 2;
    }
    return an;
}

*/










































    



