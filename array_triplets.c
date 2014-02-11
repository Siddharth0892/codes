#include <stdio.h>

int fact (int n)
{
    int f,i;
    f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    
    return f;
}

int main()
{
    printf("Enter number of elements : ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("\nEnter Elements : ");
    int p;
    for(p=0;p<n;p++)
        scanf("%d", &a[p]);
    int b[100][3];
    int sum;
    printf("\nEnter the sum : ");
    scanf("%d", &sum);
    int i,j,k, arrange;
    // calculating all possible arrangements of 3 elements
    arrange = (fact(n)/fact(n-3));
    
    printf("\nTotal possible arrangements of 3 numbers : %d", arrange);
    printf("\nThe triplets are : ");
    
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k] == sum)
                {
                  printf("\n%d, %d, %d", a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
    
}
