#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        unsigned int N;
        scanf("%u", &N);

        // Count ones in binary
        int ones = 0;
        unsigned int temp = N;
        while (temp) {
            if (temp & 1) ones++;
            temp >>= 1;
        }

        // Convert count of ones to decimal "all ones"
        unsigned int result = (1U << ones) - 1;

        printf("%u\n", result);
    }

    return 0;
}