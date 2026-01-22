#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        if (i == 1)
            printf("%lld", a);
        else if (i == 2)
            printf(" %lld", b);
        else {
            long long next = a + b;
            printf(" %lld", next);
            a = b;
            b = next;
        }
    }

    printf("\n");
    return 0;
}