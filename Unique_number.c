#include<stdio.h>
int main()
{
    int i,j,n,flag=0,r,k=0,a[100],z,f=0;
    scanf("%d",&n);
   while(n!=0)
   {
   	r=n%10;
   	a[k]=r;
   	n=n/10;
   	k++;
   }
   for(i=0;i<=k-1;i++)
  {
    z=a[i];
    for(j=i+1;j<=k-1;j++)
   	{
   		if(z==a[j])
   		{
   			f=1;
   			break;
		   }
	}
	}
   
   if(f==0)
   {
   	printf("Unique Number");
   }
   else
   {
   	printf("Not Unique Number");
   }
}
