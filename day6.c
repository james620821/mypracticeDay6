#include <stdio.h>
int main()
{
    //for (初始值; 條件式; 迴圈式){.......}
    //for (count = 1; count <= 10; count++){.....}
    /*
    int start = 1, i, end = 10;
    for (i = start; i <= end; i++)
    {
        if (i % 2 == 0 && i % 3 != 0)
        {
            printf("%d\n",i);
        }
    }
    */
    //影片9-4 求1加到N的整數和
    /*
    int i, N, sum = 0;
    printf("N = ");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    */
    //影片9-5 繪製特定長度的橫線
    /*
    int i, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        printf("*");
    }
    */
    //影片10-2 韓信點兵最大值
    /*
    int i, Max, ans;
    printf("N = ");
    scanf("%d",&Max);
    for (i = 0; i <= Max; i++)
    {
        if (i%3 == 2 && i%5 == 3 && i%7 == 2)
        {
            printf("%d, ",i);
            ans = i;
        }
    }
    printf("\n");
    printf("The maximum is %d\n", ans);
    */

    //影片10-1 找出N所有正因數
    /*
    int i, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (N%i == 0)
        {
            printf("%d ", i);
        }
    }
    */

    //影片10-6 質數判斷練習
    /*
    int i, N, c = 0;
    printf("Please enter a number: ");
    scanf("%d", &N);
    for (i = 1; i < N; i++)
    {
        if (N%i == 0 && i != 1)
        {
            c++;
        }
    }
    if (c == 0)
    {
        printf("%d is a prime number\n", N);
    }
    else
    {
        printf("%d is not a prime number\n", N);
    }
    */
    //影片11-1 印出99乘法表
    /*
    int i, j, multi;
    for (i = 2; i <=9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            multi = i * j;
            printf("%d x %d = %d\n",i ,j ,multi);
        }
    }
    */
    // not need two for loop
    /*
    int i, j, multi, c;
    for (c = 1; c <= 72; c++)
    {
        i = (c - 1) / 9 + 2;
        j = (c - 1) % 9 + 1;
        multi = i * j;
        printf("%d x %d = %d\n",i ,j ,multi);
    }
    */
    //影片11-3 用文字繪製空心矩形
    /*
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j =1; j <= N; j++)
        {
            if(i == 1 || i == N || j ==1 || j == N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    */

    //影片11-4 用文字繪製實心三角形(靠左對齊)
    /*
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1;j <= N; j++)
        {
            if (i >= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    */
    //用文字繪製空心三角形
    /*
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1;j <= N; j++)
        {
            if (i == N || j == 1 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    */
    //影片11-6 用文字繪製實心三角形(靠右對齊)
    /*
    int i, j, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1;j <= N; j++)
        {
            if (i + j >= N+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    */
    //影片11-6 找簡易方程式整數解

    int i, j;
    for (i = 0; i <= 30; i++)
    {
        //int j = 30 - i;
        //if (i * j == 221)
        //{
        //    printf("x = %d, y = %d\n",i,j);
        //}
        for (j = 0; j <= 30; j++)
        {
            if (i + j == 30 && i * j == 221)
            {
                printf("x = %d, y = %d\n",i,j);
            }
        }
    }
    return 0;
}
