#include <stdio.h>

int main() {
    int total = 0;
    int terms[2] = {1, 2};
    while (terms[1] < 4000000) {
        if (terms[1] % 2 == 0) {
            total += terms[1];
        }
        int term = terms[0] + terms[1];
        terms[0] = terms[1];
        terms[1] = term;
    }
    printf("%d\n", total);
    return 0;
}
