#include <stdio.h>
int main()
{
    //for (��l��; ����; �j�馡){.......}
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
    //�v��9-4 �D1�[��N����ƩM
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
    //�v��9-5 ø�s�S�w���ת���u
    /*
    int i, N;
    printf("N = ");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        printf("*");
    }
    */
    //�v��10-2 ���H�I�L�̤j��
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

    //�v��10-1 ��XN�Ҧ����]��
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

    //�v��10-6 ��ƧP�_�m��
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
    //�v��11-1 �L�X99���k��
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
    //�v��11-3 �Τ�rø�s�Ť߯x��
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

    //�v��11-4 �Τ�rø�s��ߤT����(�a�����)
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
    //�Τ�rø�s�ŤߤT����
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
    //�v��11-6 �Τ�rø�s��ߤT����(�a�k���)
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
    //�v��11-6 ��²����{����Ƹ�

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
