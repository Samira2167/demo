#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Top pyramid
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++)
            printf(" ");       // leading spaces
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");       // stars
        printf("\n");
    }

    // Bottom inverted pyramid
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++)
            printf(" ");       // leading spaces
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");       // stars
        printf("\n");
    }

    return 0;
}