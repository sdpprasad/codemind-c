#include<stdio.h>
int main()
{
    int i,r,n,s=1,sum=0,m;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    { s=1;
    	r=n%10;
    	{
    		for(i=1;i<=r;i++)
    		{
    			s*=i;
			}
			sum+=s;
		}
		n=n/10;
	}
	if(sum==m)
	{
		printf("The number %d is a strong number",m);
	}
	else
	{
		printf("The number %d is not a strong number",m);
	}
}