//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The sum of first %d even Natural numbers: \n", n);
    for(i=1; i<=n; i++)
    {
         sum=sum+(i*i);  
    }
    printf("Sum of even numbers is: %d",sum);
}