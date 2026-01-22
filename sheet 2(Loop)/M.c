#include <stdio.h>

int isLucky(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7)
            return 0;
        n /= 10;
    }
    return 1;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;

    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}