#include <stdio.h>
#include "calc.h"
int main() {
    int i = 0, a = 0, b = 0;
  while (i != 5) {
    printf("1) Сумма\n2) Вычитание\n3) "
           "Умножение\n4) Деление\n5) Выход\nВведите "
           "нужную цифру:\n");
    scanf("%d", &i);
    switch (i) {
    case 1: {
        printf("Введите первое число для сложения: ");
        scanf("%d", &a);
        printf("Введите второе число для сложения: ");
        scanf("%d", &b);
        printf("Ответ: %d+%d = %d\n", a, b, add(a,b));
      break;
    }
    case 2: {
        printf("Введите первое число для вычитания: ");
        scanf("%d", &a);
        printf("Введите второе число для вычитания: ");
        scanf("%d", &b);
        printf("Ответ: %d-%d = %d\n", a, b, sub(a,b));
      break;
    }
    case 3: {
        printf("Введите первое число для умножения: ");
        scanf("%d", &a);
        printf("Введите второе число для умнножения: ");
        scanf("%d", &b);
        printf("Ответ: %d*%d = %d\n", a, b, mul(a,b));
      break;
    }
    case 4: {
        printf("Введите первое число для деления: ");
        scanf("%d", &a);
        printf("Введите второе число для деления: ");
        scanf("%d", &b);
        printf("Ответ: %d/%d = %d\n", a, b, div(a,b));
      break;
    }
    case 5:
      break;
    default:
      printf("Неверный ввод\n");
    }
  }

  return 0;
}