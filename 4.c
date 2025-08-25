#include <stdio.h>

int main() {
    int matrix[2][3] = { {1,2,3}, {4,5,6} };
    char buffer[10] = "Hello";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("%s\n", buffer);
    return 0;
}
