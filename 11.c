#include <stdio.h>

void process(int arr[5], char name[20]) {
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%s\n", name);
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    char word[20] = "Analyzer";
    process(numbers, word);
    return 0;
}
