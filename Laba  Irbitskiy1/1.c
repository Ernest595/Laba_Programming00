#define _CRT_SECURE_NO_WARNINGS
/*
//������� 1



#include <stdio.h>
#include <locale.h>
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
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
*/