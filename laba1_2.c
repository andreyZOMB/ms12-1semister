#include <stdio.h>
#include <math.h>
void main() {
    float rez1,rez2,rez3,rez,rez4,x,y,z;
    printf("Введите x,y,z \n");
    scanf("%f""%f""%f",&x,&y,&z,"\n");
    rez1=pow(sin(x+y),2)+1;
    rez2=fabs(x-(2*y)/(1+pow(x,2)*pow(y,2)));
    rez3=pow(x,fabs(y));
    rez4=pow(cos(atan(1/z)),2);
    rez=rez1/rez2*rez3+rez4;
    printf("Ответ:%f\n",rez);
}