#include <stdio.h>

int main(){
    long long int x,y;
    int sum;
    scanf("%lld %lld",&x,&y);
    sum = x % 10 + y % 10;
    printf("%d",sum);
    return 0;
}