#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
  
    int rev=0,rem,k;
    k=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(k==rev)
    {
        printf("True");
    }
    else
    printf("False");
}