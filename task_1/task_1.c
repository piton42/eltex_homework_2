#include <stdio.h>
int main() {
int a1, a2, a3, a4, b1, b2, b3, b4, c;
printf("1-2)Введите положительное или отрицательное число от -128 до 127: ");
scanf("%d", &a1);
for (int i = 7; i >= 0 ; i--) {
b1 = (a1 >> i) & 1;
printf("%d", b1);
}

printf("\n3)Введите положительное число от 0 до 127: ");
scanf("%d", &a2);
for (int i = 7; i >= 0 ; i--) {
b2 = (a2 >> i) & 1;
if (b2 == 1){
c++;
}
}
printf("%d", c);

printf("\n4)Введите изначальное положительное число: ");
scanf("%d", &a3);
printf("Введите число для замены третьего байта: ");
scanf("%d", &a4);

printf("Изначальное: ");
for (int i = 23; i >= 0 ; i--) {
b3 = (a3 >> i) & 1;
printf("%d", b3);
}

printf("\nС заменой: ");
for (int i = 23; i >= 0 ; i--) {
if ((i >= 16) && (i <=23)) {
b4 = (a4 >> (i - 16)) & 1;
} else {
b4 = (a3 >> i) & 1;
}
printf("%d", b4);
}
printf("\n");
return 0;
}
