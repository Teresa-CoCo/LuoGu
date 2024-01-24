#include<stdio.h>
int main()
{
    int i=0;
    int j=0;
    int times=0;
    char input[100];
    char output[1000];
    gets(input);
    while(input[i]!='\0'){
        if (input[i+1]<=57 && input[i+1]>48)
        {
            times=input[i+1];
            for(;times>0;times--){
                output[j]=input[i-1];
                j++;
            }
        }
        else{
            output[j]=input[i];
        }
        i++;
    }
    printf("%s",output);
}