#include <stdio.h>
int main() {
    printf("1 задание:\n");
    int a, b;
    char *ptr;
    printf("\nВведите изначальное положительное число: ");
    scanf("%d", &a);
    printf("Введите число для замены третьего байта: ");
    scanf("%d", &b);
    ptr = &a;
    ptr += 2;
    ptr = &b;
    printf("Значение третьего байта: %d\n", *ptr);
    return 0;
}