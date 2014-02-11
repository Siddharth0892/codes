/*
 *    DIOPHANTINE EQUATION APPLICATION   
 * A linear diophantine equation of two solution is ax + by = c;
 * 
 * Particular solution :
 * If d|c, a particular solution to the above equation can be fpund using the foll. steps
 * 1. Reduce the equation to a1x + b1y = c1 by dividing both sides of the equation by d.
 *    This is possible because d divides a,b and c by assumption.
 * 2. Solve for s and t in the relation a1s + b1t = 1 using the extended euclidean algorithm.
 * 3. The particular solution can be found.
 * 
 *      Particular Solution : 
 *  
 *                         x0 = (c/d)s      and       y0 = (c/d)t
 * 
 * 
 *      General Solutions : 
 * 
 *                    x = x0 + k(b/d)      and    y = y0 - k(a/d) 
 *  
 *                         where k is an Integer.
 */

/*
 * Suppose you have to withdraw an amount of amt from the bank, the banker asks you 
 * what denomition of money you want, you say you want currencies of c1 and c2 . The banker has to 
 * the tell the all possible combinations.
 */

#include <stdio.h>

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

void exgcd(l a, l b)
{
    l r1, r2, s1, s2, t1, t2, s , t, q, r, gcdl;
    r1=a;
    r2=b;
    s1=1;
    s2=0;
    t1=0;
    t2=1;
    
    while(r2>0)
    {
        q = r1/r2;
        r = r1 - (q*r2);
        r1 = r2;
        r2 = r;
        
        s = s1 - (q*s2);
        s1 = s2;
        s2 = s;
        
        t = t1 - (q*t2);
        t1 = t2;
        t2 = t;
    }
    gcdl = 1;
    s = s1;
    t = t1;
}

void combinations(l a, l b, l c)
{
    l a1, b1, c1, gcd;
    gcd = gcdm(a, b);
    a1 = a/gcd;
    b1 = b/gcd;
    c1 = c/gcd;
}

int main()
{
    l a, b, c;
    printf("Enter The amount you want to withdraw : ");
    scanf("%ld", &c);
    printf("\nEnter Denomition 1 and 2 : ");
    scanf("%ld %ld", &a. &b);
    combinations(a, b, c);
    return 0;
}
