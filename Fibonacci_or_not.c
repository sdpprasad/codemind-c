#include<stdio.h>
int main()
{
    int i,n,a,b,c,z,f=0;
    scanf("%d",&n);
    z=n;
    a=0;                  //fibnoc
    b=1;
    for(i=0;i<=n;i++)
    {  c=a+b;
      if(z==a)
      {
      	f=1;
	  }
        a=b;
        b=c;
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