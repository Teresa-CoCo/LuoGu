#include<stdio.h>
int timerev(int time){
    int hour=time/60;
    int min=time-(hour*60);
    printf("%d %d",hour,min);
}

int main()
{
    int a,b,c,d,e,f;
    int mina,minc,temp;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    mina=a*60+b;
    minc=c*60+d;
    temp=minc-mina;
    timerev(temp);
}
