#include <stdio.h>
int num()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i == N)
        {
            printf("%d", i);
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
int main()
{
    num();
}