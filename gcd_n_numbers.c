#include <stdio.h>

// GCD of n numbers

typedef unsigned long int l;

l gcdm(l a, l b) 
{ 
    l temp; 
    while (b != 0) 
    { 
        temp = b; 
        b = a % b; 
        a = temp; 
    } 
    return a; 
} 

int main()
{
    printf("Enter Total Count Of Numbers : ");
    l n,a[100],gcd;
    scanf("%ld", &n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%ld", &a[i]);
    }
    for(i=0;i<n;i=i+3)
    {
        gcd = gcdm(a[i+2], gcdm(a[i], a[i+1]));
    }
    
    printf("\n%ld", gcd);
    return 0;
}
