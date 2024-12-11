#define _CRT_SECURE_NO_WARNINGS
/*
//Задание 8

#include <stdio.h>

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int evenArr[n]; // Новый массив для чётных чисел
    int evenCount = 0; // Счетчик чётных чисел

    
    for (int i = 0; i < n; i++) {
        
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i]; 
            evenCount++; 
        }
    }

    printf("Четные числа в новом массиве: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}
*/