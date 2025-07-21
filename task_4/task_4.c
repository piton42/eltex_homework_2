#include <stdio.h>
#include <string.h>
    struct abonent {
        char name[10];
        char second_name[10];
        char tel[10];
    };
int main() {
    struct abonent spravochnik[100];
    int a, i=0, k;
    while (a != 5) {
    printf("1) Добавить абонента (%d ячеек заполнено)\n2) Удалить абонента\n3) Поиск абонентов по имени\n4) Вывод всех записей\n5) Выход\nВведите нужную цифру:\n", i);
    scanf("%d", &a);
    switch (a) {
    case 1: {
        if(i > 99) {
            printf("Список заполнен");
            break;
        }
        printf("Введите имя: ");
        scanf("%10s", spravochnik[i].name);
        printf("Введите фамилию: ");
        scanf("%10s", spravochnik[i].second_name);
        printf("Введите номер телефона: ");
        scanf("%10s", spravochnik[i].tel);
        i++;
        break;
    }
    case 2: {
        k = i;
        printf("Введите номер ячейки, которую нужно удалить: ");
        scanf("%d", &i);
        *spravochnik[i-1].name = 0;
        *spravochnik[i-1].second_name = 0;
        *spravochnik[i-1].tel = 0;
        i = k;
        break;
    }
    case 3: {
            printf("Введите имя для поиска: ");
            char name[10];
            scanf("%10s", name);
            for(int j = 0; j < i; j++) {
                if (strcmp(spravochnik[j].name, name) == 0) {
                    printf("%d) %s %s %s\n", j + 1,  spravochnik[j].name, spravochnik[j].second_name, spravochnik[j].tel);
                }

                
            }
            break;
    
    }
    case 4: {
            for(int j = 0; j < i; j++) {
                printf("%d. %s %s %s\n", j + 1,  spravochnik[j].name, spravochnik[j].second_name, spravochnik[j].tel);
            }
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