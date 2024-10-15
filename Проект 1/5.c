#define _CRT_SECURE_NO_WARNINGS

//Задание 5
#include <stdio.h>
#include <locale.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Проверка, найден ли элемент
        if (arr[mid] == target) {
            return mid; // Возвращаем индекс найденного элемента
        }

        if (arr[mid] < target) {
            left = mid + 1;
        }
       
        else {
            right = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    setlocale(LC_ALL, "Russian");

    printf("Введите элемент для поиска: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Элемент найден на индексе: %d\n", result);
    }
    else {
        printf("Элемент не найден\n");
    }

    return 0;
}

