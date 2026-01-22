#include <stdio.h>
#include <string.h>

int main() {
    char S[1005];
    scanf("%s", S);
    int len = (int)strlen(S);
    for (int i = 0; i < len / 2; i++) {
        if (S[i] != S[len - i - 1]) {
            printf("NO\n");
            return 0;  
        }
    }
    printf("YES\n");
    return 0;  
}