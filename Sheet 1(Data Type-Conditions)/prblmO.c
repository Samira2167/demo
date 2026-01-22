#include <stdio.h>

int main(){
    int a , b;
    char x;
    scanf("%d %c %d",&a ,&x, &b);
    if(x == '+'){printf("%d\n", a+b);}
    else if (x == '-'){printf("%d\n",a-b);}
    else if (x == '*'){printf("%d\n", a*b);}
    else{printf("%d\n", a/b);}
    return 0;
}