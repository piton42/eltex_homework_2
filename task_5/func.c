#include "func.h"
#include <stdio.h>
#include <string.h>
void add_abonent(struct abonent *spravochnik, int i) {
  printf("Введите имя: ");
  scanf("%10s", spravochnik[i].name);
  printf("Введите фамилию: ");
  scanf("%10s", spravochnik[i].second_name);
  printf("Введите номер телефона: ");
  scanf("%10s", spravochnik[i].tel);
}
void del_abonent(struct abonent *spravochnik, int i) {
  *spravochnik[i - 1].name = 0;
  *spravochnik[i - 1].second_name = 0;
  *spravochnik[i - 1].tel = 0;
}
void find_abonent(struct abonent *spravochnik, int i, char name[10]) {
  for (int j = 0; j < i; j++) {
    if (strcmp(spravochnik[j].name, name) == 0) {
      printf("%d) %s %s %s\n", j + 1, spravochnik[j].name,
             spravochnik[j].second_name, spravochnik[j].tel);
    }
  }
}
void display_abonent(struct abonent *spravochnik, int i) {
  for (int j = 0; j < i; j++) {
    printf("%d. %s %s %s\n", j + 1, spravochnik[j].name,
           spravochnik[j].second_name, spravochnik[j].tel);
  }
}