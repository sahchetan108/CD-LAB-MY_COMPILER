#include <stdio.h>

int main() {
    int a = 10;
    int b = 012;      // octal
    int c = 0x1F;     // hex
    float d = 2.5e-3; // scientific notation

    printf("%d %d %d %f\n", a, b, c, d);
    return 0;
}
