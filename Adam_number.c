#include<stdio.h>
int main()
{
	int i,n,rev1=0,r,m,a,b,rev2=0;
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		rev1=rev1*10+r;
		n=n/10;
	}
	a=m*m;
	b=rev1*rev1;
	while(b!=0)
	{
		r=b%10;
		rev2=rev2*10+r;
		b=b/10;
	}
	if(a==rev2){
		printf("True");
	}
	else
	{
		printf("False");
	}
}