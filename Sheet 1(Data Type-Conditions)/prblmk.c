#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C){
        printf("%d ", A);
        if (B<C)
        {
            printf("%d", C);
        }else{
            printf("%d",B);
        }
    }else if (B <= A && B <=C) {
        printf("%d ",B);
        if (A < C){
            printf("%d",C);
        }else{
            printf("%d",A);
        }
    }else if (C <= A && C <= B){
        printf("%d ",C);
        if (B < A){
            printf("%d",A);
        }else{
            printf("%d",B);
        }
    }
    else{
        printf("Not a NUmber");
    }
    return 0;
}