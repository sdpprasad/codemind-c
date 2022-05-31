#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    if(i*i==n)
    {
        f=1;
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}