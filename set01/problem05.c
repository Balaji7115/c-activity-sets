#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int num1, num2, num3, largest;
    num1 = input();
    num2 = input();
    num3 = input();

    largest = compare(num1, num2, num3);

    output(num1, num2, num3, largest);

    return 0;
}

int input()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    return num;
}

int compare(int a, int b, int c)
   /* int largest = a;
    if (b > largest)
    {
        largest = b;
    }

    if (c > largest)
    {
        largest = c;
    }
    return largest;*/

{
   if( a>=b && a>=c )     
   {
    return a;
   }
   else if (b>=a && b>=c)
   {
    return b;
   }
   else 
   {
    return c;
   }
}
void output(int a, int b, int c, int largest)
{
     printf("largst of %d,%d and %d is %d\n", a, b,c,largest);
}