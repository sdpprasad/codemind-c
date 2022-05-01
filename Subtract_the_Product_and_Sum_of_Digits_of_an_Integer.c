#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,p=1,s=0;
    while(n!=0)
    {
        r=n%10;
        s+=r;
        p*=r;
        n=n/10;
    }
    if(s>p)
    {
    printf("%d ",s-p);
    }
    else
	{
    	 printf("%d",p-s);
    	 
	}
}