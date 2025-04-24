#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char *s) {
    int len = strlen(s);
    for (int i = 0; i < floor(len / 2); i++) {
        if (s[i] != s[len-1-i]) return 0;
    }
    return 1;
}

int main() {
    const int max = 999;
    const int min = 100;
    int largest = 0;
    for (int a = max; a >= min; a--) {
        for (int b = a; b >= min; b--) {
            int n = a * b;
            char *s = malloc(6 * sizeof(char));
            sprintf(s, "%d", n);
            if (palindrome(itoa(n, s, 10))) {
                if (n > largest) largest = n;
            }
        }
    }
    printf("%d\n", largest);
    return 0;
}
