//3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("\n\nEnter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(2*i-1);
    }
    printf("\nSum of first %d odd natural number: %d", n, sum);
}




