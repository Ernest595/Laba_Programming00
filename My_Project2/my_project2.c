//������� 1

/*

#include <stdio.h>
#include <locale.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) { // ���� n ��� - �� 1 �� �������
        for (j = 0; j < n - i - 1; j++) { // ��������� i �������� ��� �������������
            if (a[j] > a[j + 1]) { // �������� �������, ���� ������� �������
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
    printf("������� ���������� ��������� � �������:\n");
    scanf("%d", &n);
    printf("������� %d ����� ����� \n ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubble_sort(a, n);
    printf("������ ���������������� �������:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
    return 0;
}






//������� 2
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        // ������ ������� �������
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // �������� ���������
        start++;
        end--;
    }
}

int main() {
    char str[100]; // ������ ��� �������� ������

    printf("������� ������: ");
    fgets(str, sizeof(str), stdin); // ������ ������ (������� �������)

    // ������� ������ ����� ������, ���� �� ����
    str[strcspn(str, "\n")] = 0;

    reverseString(str); // �������� ������� ��� ���������� ������

    printf("������������ ������: %s\n", str); // ������� ���������

    return 0;
}
*/
//������� 20

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

//������� 4
*/