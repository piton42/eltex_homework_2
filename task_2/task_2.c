#include <stdio.h>
#define N 7
int main() {
    int c = 1;
    int matr[N][N] = {0};
    printf("1 Задание:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        matr[i][j] = c;
        c++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        printf("%3d",matr[i][j]);
        }
        printf("\n");
    }
    printf("2 Задание:\n");
    int mas[N] = {0};
    int temp;
    for (int i = 0; i < N; i++) {
        mas[i] = i + 1;
    }
    printf("Исходный: ");
        for (int i = 0; i < N; i++) {
        printf("%3d", mas[i]);
    }
    for (int i = 0; i < N/2; i++) {
        temp = mas[i];
        mas[i] = mas[N-i-1];
        mas[N-i-1] = temp;

    }
    printf("\nИзмененный: ");
    for (int i = 0; i < N; i++) {
        printf("%3d", mas[i]);
    }
    printf("\n3 Задание:\n");
    int matr2[N][N] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        if (i+j <= N - 2) {
        matr2[i][j] = 0;
        } else matr2[i][j] = 1;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        printf("%3d",matr2[i][j]);
        }
        printf("\n");
    }
    printf("4 Задание:\n");
    int c2=1, i = -1, j = -1, M = 0;
    int matr3[N][N] = {0};
    for (int k = 0; k < N/2 + 1; k++) {
    i++;
    for (j++; j < N - k; j++) {
        matr3[i][j] = c2;
        c2++;
    }
    j--;
    for (i++; i < N - k;i++) {
        matr3[i][j] = c2;
        c2++;
    }
    i--;
    for (j--; j >= 0 + k; j--) {
        matr3[i][j] = c2;
        c2++;
    }
    j++;
    for (i--; i > 0 + k; i--) {
        matr3[i][j] = c2;
        c2++;
    }
    
}

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        printf("%3d",matr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
