// 1번문제
//  #include<stdio.h>
//  void swap(int *px, int *py);
//  int main(void)
//  {   int num1=4,num2=8;
//      swap(&num1,&num2);
//      printf("%d %d",num1,num2);
//      return 0;
//  }
//  void swap(int *px, int *py)
//  {
//      int temp;
//      temp = *px;
//      *px = *py;
//      *py = temp;
//  }

// 2,3번문제
// #include <stdio.h>
// void SAndM(double *a,double *b);
// int main(void)
// {
//     double num1=3.2,num2=6.4;
//     SAndM(&num1,&num2);
//     printf("합계:%f 평균:%f",num1,num2);
//     return 0;
// }
// void SAndM(double *a,double *b)
// {
//     double s,m;
//     s=*a+*b;
//     m=(*a+*b)/2;
//     *a=s;
//     *b=m;
// }

// 4번 문제
// #include <stdio.h>
// void Nxlocation(int arr1[], int s, int n);//n의 배수를 출력하기
//                    //배열,   길이,  배수가 될 수

// int main(void)
// {
//     int arr[100] = {0,};
//     int i;
//     int size = sizeof(arr) / sizeof(int);//배열의 길이
//     int n;

//     for (i = 0; i < size; i++)//배열 100까지 입력
//     {
//         arr[i] = i + 1;
//     }
    
//     scanf("%d", &n);
//     Nxlocation(arr, size, n);//배열,배열의 길이,배수가 될 수
//     return 0;
// }
// void Nxlocation(int arr1[], int s, int n)
// {
//     int i;
//     for (i = 1; i < s; i++)
//     {
//         if ((n * i) - 1 >= s)//배열의 길이보다 인덱스가 커지면 멈춤
//             break;
//         printf("%d ", arr1[(n * i) - 1]);
//     }
// }


