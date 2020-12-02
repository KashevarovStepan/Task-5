#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maxdig(int n)
{
    int max=n%10;
    if(n>0)
    {
        if(maxdig(n/10)>max)max=maxdig(n/10);
        else;
    }
    else;
    return max;
}

void Task3()
{
    printf("Задание 3\n");
    int n,max;
    printf("Введите целое неотрицательное число\n");
    scanf("%d",&n);
    max=0;
    if(n==0);
    else
    {
        max=maxdig(n);
    }
    printf("Max digit 0f %d = %d",n,max);
}

int sum()
{
    int x,y;
    scanf("%d",&y);
    if(y==-1);
    else
    {
        x=x+y;
        x+=sum();
    }
    return x;
}

void Task5()
{
    printf("Задание 5\n");
    int f=0;
    printf("Введите раздельно числа последовательности, по одному в строке\n");
    printf("\"-1\" - конец последовательности, в последовательность не входит\n");
    f=sum();
    printf("Сумма элементов = %d\n",f);
}

int main()
{
    SetConsoleOutputCP(1251);
    printf("Task 7\n");
    int task;
    do
    {
        printf("Введите номер задания(0-выход;3,5)\n");
        scanf("%d",&task);
        switch(task)
        {
        case 0:
            break;
        case 3:
            Task3();
            break;
        case 5:
            Task5();
            break;
        default:
            printf("Данное задание не выполнено");
            break;
        }
        printf("\n");
    }while(task!=0);
    return 0;
}
