#include <stdio.h>
#define MAX 5

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};
    for (int i = 0; i < MAX; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
