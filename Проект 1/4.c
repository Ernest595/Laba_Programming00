#define _CRT_SECURE_NO_WARNINGS

//�������4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define SIZE 100 

int main() {
    int arr[SIZE];
    int maxNum, minNum;
    int maxIndex, minIndex;

    setlocale(LC_ALL, "Russian");

    // ������������� ���������� ��������� �����
    srand(time(NULL));

  
    for (int i = 0; i < SIZE; i++) {
        arr[i] = (rand() % 20001) - 10000; 
    }

    
    maxNum = minNum = arr[0];
    maxIndex = minIndex = 0;

    
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minNum) {
            minNum = arr[i];
            minIndex = i;
        }
    }

    // ����� �����������
    printf("������������ �����: %d (������: %d)\n", maxNum, maxIndex);
    printf("����������� �����: %d (������: %d)\n", minNum, minIndex);

    return 0;
}
