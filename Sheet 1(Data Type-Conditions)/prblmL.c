#include <stdio.h>

int main() {
    char F1[101], S1[101];
    char F2[101], S2[101];

    // safer scanf
    if (scanf("%100s %100s", F1, S1) != 2) return 0;
    if (scanf("%100s %100s", F2, S2) != 2) return 0;

    int i = 0, same = 1;
    while (S1[i] != '\0' || S2[i] != '\0') {
        if (S1[i] != S2[i]) {
            same = 0;
            break;
        }
        i++;
    }

    if (same)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}