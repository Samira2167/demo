#include <stdio.h>

int isPrime() {              // no parameter, return value
    int X;
    scanf("%d", &X);

    if (X <= 1) return 0;
    for (int i = 2; i * i <= X; i++) {
        if (X % i == 0) return 0;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        if (isPrime())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}