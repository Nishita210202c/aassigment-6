//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    
    int i, n, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("program to find sum of %d natural numbers:\n ", n);
    for(i=1; i<=n; i++)
    {
        sum= sum+i;
    }
    printf("sum is %d", sum);
    
}
