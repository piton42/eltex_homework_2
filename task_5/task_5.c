#include "func.h"
#include <stdio.h>
#include <string.h>

int main() {
  struct abonent spravochnik[100];
  int a = 0, i = 0, k;
  while (a != 5) {
    printf("1) Добавить абонента (%d ячеек заполнено)\n2) Удалить абонента\n3) "
           "Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\nВведите "
           "нужную цифру:\n",
           i);
    scanf("%d", &a);
    switch (a) {
    case 1: {
      if (i > 99) {
        printf("Список заполнен");
        break;
      }
      add_abonent(spravochnik, i);
      i++;
      break;
    }
    case 2: {
      k = i;
      printf("Введите номер ячейки, которую нужно удалить: ");
      scanf("%d", &i);
      del_abonent(spravochnik, i);
      i = k;
      break;
    }
    case 3: {
      printf("Введите имя для поиска: ");
      char name[10];
      scanf("%10s", name);
      find_abonent(spravochnik, i, name);
      break;
    }
    case 4: {
      display_abonent(spravochnik, i);
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