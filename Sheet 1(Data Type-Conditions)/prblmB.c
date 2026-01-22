#include <stdio.h>
int main ()
{
    int x;
    long long int y;
    char ch;
    float p;
    double q;
    scanf("%d %lld %c %f %lf",&x ,&y ,&ch ,&p ,&q);
    printf("%d\n",x);
    printf("%lld\n",y);
    printf("%c\n",ch);
    printf("%f\n",p);
    printf("%lf\n",q);
}