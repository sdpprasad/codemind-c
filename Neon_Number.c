#include<stdio.h>
int main()
{
    int n,b,r,sum=0;
    scanf("%d",&n);
    b=n*n;
    while(b!=0)
    {
        r=b%10;
        sum+=r;
        b=b/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
        
    }
    else
    printf("Not Neon Number");
    
}