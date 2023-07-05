#include <stdio.h>
#include <locale.h> // Для української мови

int main() {
system("chcp 1251"); // Для української мови
system("cls"); // Для української мови
    unsigned int n;
    printf("Введіть натуральне число n: ");
    scanf("%u", &n);

    int count = 0; // використовую змінну count для підрахунку кількості рівних дільників
    for (unsigned int m = 1; m <= n; m++) {
        if (n % m == n / m) {
            count++; // Якщо умова виконується, збільшуємо лічильник count
        }
    }

    printf("Кількість рівних дільників числа %u: %d\n", n, count);

    return 0;
}
