#include<stdio.h>
int main()
{
    int n,s=0,r,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    if(m%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}