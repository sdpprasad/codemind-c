#include<stdio.h>
int main()
{
	int i,n,r,la=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(la<r)
		{
			la=r;
	    }
	    n=n/10;
	}
	printf("%d",la);
}