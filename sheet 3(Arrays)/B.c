#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    long long int A[N];
    for (int i = 0; i<N; i++)
    {
        scanf("%lld",&A[i]);
    }
    long long int X;
    scanf("%lld",&X);
    for (int i = 0; i<N; i++)
    {
        if(X == A[i])
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
}