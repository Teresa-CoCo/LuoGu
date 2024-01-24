# #include<stdio.h>
# #include<math.h>
# int main()
# {
#     float a,b,c,p,s;
#     scanf("%f %f %f",&a,&b,&c);
#     p=(a+b+c)/2.0;
#     s=sqrt(p*(p-a)*(p-b)*(p-c));
#     printf("%.1f",s);
# }

#复现此程序

import math
string=input()
a, b, c = map(float, string.split())
# a=float(input())
# b=float(input())
# c=float(input())
p=(a+b+c)/2.0
s=math.sqrt(p*(p-a)*(p-b)*(p-c))
print(f"{s:.1f}")
