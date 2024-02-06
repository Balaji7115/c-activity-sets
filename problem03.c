#include <stdio.h>

int input();
int add(int a, int b,int sum);
void output(int a, int b, int sum);
int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b,sum);
    output(a,b,sum);
    return 0;
}
int input()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
return num;
}

int add(int a, int b,int sum)
{
sum=a+b;
return sum;
}
void output(int a, int b, int sum)
{
    printf("the sum is %d\n",sum);
}
