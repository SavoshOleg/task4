#include <stdio.h>
#include <locale.h> // ��� ��������� ����

int main() {
system("chcp 1251"); // ��� ��������� ����
system("cls"); // ��� ��������� ����
    unsigned int n;
    printf("������ ���������� ����� n: ");
    scanf("%u", &n);

    int count = 0; // ������������ ����� count ��� ��������� ������� ����� �������
    for (unsigned int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++; // ���� ����� ����������, �������� �������� count.
        }
    }

    printf("ʳ������ ����� ������� ����� %u: %d\n", n, count);

    return 0;
}
