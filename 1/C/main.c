#include <stdio.h>

int main() {
    int total = 0;
    for (int n = 3; n < 1000; n++) {
        if (n % 3 != 0 && n % 5 != 0) {
            continue;
        }
        total += n;
    }
    printf("%d\n", total);
    return 0;
}
