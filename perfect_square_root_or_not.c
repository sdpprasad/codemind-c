#include<stdio.h>
#include<math.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    c=sqrt(n);
    if(c*c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}