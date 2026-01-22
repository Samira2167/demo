#include <stdio.h>
long long int factorial(int i, int n, long long int sum){
    if (i <= n){
        sum *= i;
        factorial(i+1, n, sum);
    }
    else{ return sum;}
}

int main(){
    int n;
    scanf("%d",&n);
    int sum =1;
    long long int x = factorial (1, n, sum);
    printf("%lld ", x);
    return 0;
}