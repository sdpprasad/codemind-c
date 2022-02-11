#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&i);
	for(b=1;b<=i;b++)
	{
		if(b%2==0)
		continue;
		{
			printf("%d x %d = %d
",a,b,a*b);
		}
	}
}