#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void maxdig(int*n,int*m)
{
    int x=*n;
    int max=*m;
    if(x%10>max)
    {
        max=x%10;
        x=x/10;
        *n=x;
        *m=max;
    }
    else
    {
        x=x/10;
        *n=x;
        *m=max;
    }
    if(x/10==0&x%10==0);
    else
    {
        maxdig(&x,&max);
        *n=x;
        *m=max;
    }
}

void Task3()
{
    printf("������� 3\n");
    int x,n,max;
    printf("������� ����� ��������������� �����\n");
    scanf("%d",&n);
    x=n;
    max=0;
    if(n==0);
    else
    {
        maxdig(&n,&max);
    }
    printf("Max digit 0f %d=%d",x,max);
}

void sum(int*f)
{
    int x=*f;
    int y;
    scanf("%d",&y);
    if(y==-1)*f=x;
    else
    {
        x=x+y;
        sum(&x);
        *f=x;
    }
}

void Task5()
{
    printf("������� 5\n");
    int f=0;
    printf("������� ��������� ����� ������������������, �� ������ � ������\n");
    printf("\"-1\" - ����� ������������������, � ������������������ �� ������\n");
    sum(&f);
    printf("����� ��������� = %d\n",f);
}

int main()
{
    SetConsoleOutputCP(1251);
    printf("Task 7\n");
    printf("������� ����� �������(3,5)\n");
    int task;
    scanf("%d",&task);
    switch(task)
    {
    case 3:
        Task3();
        break;
    case 5:
        Task5();
        break;
    default:
        printf("������ ������� �� ���������");
        break;
    }
    return 0;
}
