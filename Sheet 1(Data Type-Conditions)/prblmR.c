#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int y = N / 365;
    int rd = N % 365;
    int m = rd / 30;
    int d = rd % 30;
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    return 0;
}