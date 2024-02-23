#include<stdio.h>
int input_n();
int sum_n_nos(int n,int sum);
void output(int n, int sum);
int main()
{
    int n,sum=0;
    n=input_n();
    sum=sum_n_nos(n,sum);
    output(n,sum);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n,int sum)
{
    int i;
   for(i=1;i<=n;i++)
    {
        sum=sum+i;    
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of %d is %d\n",n,sum);
}