#define _CRT_SECURE_NO_WARNINGS

//������� 3

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

    printf("������� ������ �����: ");
    scanf("%d", &num1);
    printf("������� ������ �����: ");
    scanf("%d", &num2);

    // ����� �������� �� ������
    printf("�� ������: num1 = %d, num2 = %d\n", num1, num2);


    swap(&num1, &num2);

    // ����� �������� ����� ������
    printf("����� ������: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


