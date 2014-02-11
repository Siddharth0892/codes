#include <stdio.h>

// implementation of Eucledian Algorithm

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
    printf("Enter Two Numbers : ");
    l a,b,gcd;
    scanf("%ld %ld", &a, &b);
    gcd = gcdm(a,b);
    printf("\n%ld", gcd);
    return 0;
}
