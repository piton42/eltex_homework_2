#include <stdio.h>
int main() {
    int mas[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = &mas;
    for(int i = 0; i < 10; i++) {
        printf("%3d", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}