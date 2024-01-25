package jaha;

import java.util.Scanner;




// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     double a,b,c,p,s;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     p=(a+b+c)/2.0;
//     s=sqrt(p*(p-a)*(p-b)*(p-c));
//     printf("%.1lf",s);/
// }
public class test {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double p;

        String input= new String();
        input= in.nextLine();
        String[] numbers = input.split(" ");
        double a = Float.parseFloat(numbers[0]);
        double b = Float.parseFloat(numbers[1]);
        double c = Float.parseFloat(numbers[2]);
        p=(a+b+c)/2.0;
        double s=Math.sqrt(p*(p-a)*(p-b)*(p-c));
        System.out.printf("%.1f%n",s);
        
    }
}