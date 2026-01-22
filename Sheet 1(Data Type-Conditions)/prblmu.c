#include <stdio.h>

int main() {
    float N;
    int intPart;
    
    scanf("%f", &N);
    
    intPart = (int) N;   // get integer part
    
    if (N == intPart)
        printf("int %d\n", intPart);
    else
        printf("float %d %.3f\n", intPart, N - intPart);
        
    return 0;
}