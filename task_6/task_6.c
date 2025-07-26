#include "func.h"
int main() {
  struct double_linked_list *spravochnik = init_list();
  int a = 0, i = 0, k;
  while (a != 5) {
    printf("1) Добавить абонента (%d ячеек заполнено)\n2) Удалить абонента\n3) "
           "Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\nВведите "
           "нужную цифру:\n",
           i);
     if (scanf("%d", &a) != 1) {
        printf("ошибка ввода\n"); 
        break;
      }
    switch (a) {
    case 1: {
      add_element(spravochnik);
      i++;
      break;
    }
    case 2: {
      k = i;
      printf("Введите номер ячейки, которую нужно удалить: ");
      if (scanf("%d", &i) != 1) {
        printf("ошибка ввода\n"); 
        break;
      }
      delete_element(spravochnik, get_Nth(spravochnik, i));
      i = k - 1;
      break;
    }
    case 3: {
      find_element(spravochnik);
      break;
    }

    case 4: {
      print_list(spravochnik);
      break;
    }
    case 5:
      break;
    default:
      printf("Неверный ввод\n");
      break;
    }
  }
  delete_list(&spravochnik);
  return 0;
}