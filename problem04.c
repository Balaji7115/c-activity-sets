
#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main() 
{
    int num1,num2,sum;
    input(&num1,&num2);
    add(num1,num2,&sum);
    output(num2,num1,sum);
    return 0;
    
}
void input(int *a, int *b)
{
    printf("Enter the first num:\n");
    scanf("%d",a);
    printf("Enter the second num:\n");
    scanf("%d",b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("\nThe sum of %d and %d is:%d\n",a,b,sum);
}
