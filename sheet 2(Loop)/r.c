#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        if (scanf("%d %d", &N, &M) != 2)
            break; // end of input

        if (N <= 0 || M <= 0)
            break; // terminate immediately

        int start = N < M ? N : M;
        int end = N > M ? N : M;
        int sum = 0;

        for (int i = start; i <= end; i++) {
            printf("%d", i);
            sum += i;
            if (i != end) printf(" ");
        }

        printf(" sum =%d\n", sum);
    }

    return 0;
}