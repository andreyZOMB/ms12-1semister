#include <stdio.h>
#include <math.h>
void main() {
    int max,i1,i2,i3,i4,s1,s2,s3,s4,sum,m1,m2,m3,m4;
    sum=s1=s2=s3=s4=i1=i2=i3=i4=0;
    max=100;
    m1=50;
    m2=20;
    m3=5;
    m4=2;
    while(s1<max){
        while(s2<max){
            while(s3<max){
                while(s4<max){
                    s4=s4+m4;
                }
                if (s4==max) sum=sum+1;
                s3=s3+m3;
                s4=s3;
            }
            if (s3==max) sum=sum+1;
            s2=s2+m2;
            s3=s2;
        }
        if (s2==max) sum=sum+1;
        s1=s1+m1;
        s2=s1;
    }
    if (s1==max) sum=sum+1;  
    printf("%d",sum,"\n");
}