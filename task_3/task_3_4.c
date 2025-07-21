#include <stdio.h>

int main() {
    char str[10]={0};
    char podstr[3]={0};
    int flag = 0;
    char *ptr = NULL;
    ptr = NULL;
    printf("\nВведите строку длиной до 10 символов: ");
    scanf("%10s", str);
    printf("Введите подстроку длиной до 3 символов: ");
    scanf("%3s", podstr);
    for (int i = 0; i < 8; i++) {
        if (str[i] == podstr[0]) {
            for (int j = 1; j < 3; j++) {
                if (str[i + j] == podstr[j]) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) ptr = &str[i];
        }
    }
    printf("%p\n", ptr);
    return 0;
}