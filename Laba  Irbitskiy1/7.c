#define _CRT_SECURE_NO_WARNINGS
/*
//Задание 7
#include <stdio.h>

int main() {
    
    int arr[] = { 10, 20, 30, 40, 50, 60, 70 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Новый массив для хранения чисел с нечётных позиций
    int newArr[ size / 2 + 1];  
    int j = 0;

    
    for (int i = 0; i < size; i++) {
        if (i % 2 != 0) {  
            newArr[j] = arr[i];
            j++;
        }
    }


    printf("Новый массив: ");
    for (int k = 0; k < j; k++) {
        printf("%d ", newArr[k]);
    }

    return 0;
}
*/