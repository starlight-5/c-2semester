//3번문제
// #include <stdio.h>

// int main(void)

// {

// 	double arrd[4] = {12.4, 23.1, 15.7, 31.2};

// 	double *pb = arrd;

// 	int i;

// 	for (i = 0; i < 4; i++)

// 	{

// 		printf("%.6f\n", *pb);

// 		pb = pb + 1;
// 	}
// 	return 0;
// }

// 4번
// #include <stdio.h>
// int main(void)
// {
//     char *p = "banana";

//     int i;
//     int j;
//     for (i = 0; i < 6; i++)
//     {
//         for (j = i; j < 6; j++)
//         {
//             printf("%c", *(p + j));
//         }
//         printf("\n");
//     }
//     return 0;
// }
//4번 방법 2
// #include <stdio.h>
// int main(void)
// {

//     char *p = "banana";
//     int i = 0;

//     while (*p != 'e')
//     {
//         if (*p == '\0')
//         {
//             break;
//         }
//         i++;
//         p++;
//     }
//     if (*p != '\0')
//     {
//         printf("%d\n", i);
//     }
//     else
//     printf("e가 없습니다.");

// }

// 5번
// #include <stdio.h>
// int main(void)
// {
//     char *p = "computerprogramming";
//     int i = 0;
//     while (1)
//     {
//         if (*(p + i) == 'e')
//         {
//             printf("%d", i);
//             break;
//         }
// 		if(*(p+i)=='\0')
// 		{
// 			printf("%s에는 e가 없습니다.",p);
// 			break;
// 		}
//         i++;
//     }

//     return 0;
// }
