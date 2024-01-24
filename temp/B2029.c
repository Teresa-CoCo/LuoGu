#include<stdio.h>
int main()
{
    int lenth,height;
    float v;
    int need;
    scanf("%d %d",&height,&lenth);
    v=3.14*lenth*lenth*height;
    need = (20000/v)+1;
    printf("%d",need);
}
