#include <stdio.h>
#include <math.h>
void main() {
    int rez,n,n1,n2,n3,n4,n5,n6;
    printf("Введите номер билета \n");
    scanf("%d",&n,"\n");
    n1=n/100000;
    n2=n/10000-n/100000*10;
    n3=n/1000-n/10000*10;
    n4=n/100-n/1000*10;
    n5=n/10-n/100*10;
    n6=n-n/10*10;
        if (n1+n2+n3==n4+n5+n6)
            printf("Счасливый");
        else
            printf("Несчастный");
}