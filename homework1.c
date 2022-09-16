// 1문제
//  #include<stdio.h>
//  double cmTom(double n)
//  {
//      return n/100;
//  }

// int main (void)
// {
//     double key;
//     scanf("%lf",&key);
//     printf("%f",cmTom(key));
//     return 0;
// }

// 2문제

// double sum(double a,double b)//합
// {
// return a+b;
// }
// double M(double a,double b)//평균
// {
// return (a+b)/2;
// }

// #include<stdio.h>
// int main (void)
// {    double a,b;
// scanf("%lf %lf",&a,&b);
// printf("%f %f",sum(a,b),M(a,b));
//     return 0;
// }

// 3문제
// #include <stdio.h>
// double SumAndM(void)
// {
//     double a;
//     double b;
//     char n;
//     scanf("%lf %lf %c", &a, &b, &n);
//     while (n != '+' && n != '#')
//     {

//         scanf("%c", &n);
//         continue;
//     }
//     if (n)
// }

// int main(void)
// {

//     printf("%f", SumAndM(), "UTF-8");

//     return 0;
// }

// 4문제
// #include <stdio.h>
// int ToSum(int n)
// {
//     int i;
//     int sum = 0;
//     for (i = 1; i <= n; i++)
//     {
//         if (sum >= 1000)
//             break;
//         else if (i % 5 == 0)
//             continue;
//         else
//             sum += i;
//     }
//     return sum;
// }

// int main(void)
// {
//     int num;
//     scanf("%d", &num);
//     printf("%d", ToSum(num));
//     return 0;
// }

// 5문제

// int Sum(int n)
// {
//     static int sum = 0;
//     if (n != 0)
//         Sum(n - 1);
//     return sum += n;
// }

// #include <stdio.h>
// int main(void)
// {
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",Sum(n));
//     return 0;
// }

// 6문제

//  #include<stdio.h>
// int main (void)
// {
// int a = 100;

// int *p = &a;

// *p = 200;

// printf("%d", a);

// printf("%d", (*p)+a);
//     return 0;
// }

//예측 200400 실제 200400

// 7문제

// #include<stdio.h>
// int main (void)
// {
//     double a = 100;

//     int *p = &a;

//     double *pd;

//     pd = p;

//     printf("%lf", *pd);
//     return 0;
// }

//예측 100.000000 실제 0.000000
// 포인터가 정수가 실수, 실수가 정수를 가르키면 0이 된다.

// 8문제

// void Swap(int x, int y)//1방법
// {
//     int temp;
//     temp=x;
//     x=y;
//     y=temp;
//     printf("x:%d y:%d",x,y);
// }
// void swap(int a, int b)//2방법(포인터)
// {
//     int* temp;
//     temp=a;
//     px=py;
//     py=temp;
//     printf("x:%d y:%d",*px,*py);
// }

// #include<stdio.h>
// int main (void)
// {
// Swap(2,4); //1방법
// int a=9,b=10;
// swap(a,b);//2방법
// return 0;
// }

// 9문제

// void SumAndM(double a, double b)
// {
//     double *ptra = &a;
//     double *ptrb = &b;
//     printf("%f %f", *ptra + *ptrb, (*ptra * *ptrb) / 2);
// }

// #include <stdio.h>
// int main(void)
// {
//     double a = 2.0;
//     double b = 3.0;
//     SumAndM(a, b);
//     return 0;
// }
