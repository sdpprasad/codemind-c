#include<stdio.h>
int main()
{
	int n;
    scanf("%d",&n);
  	int arr[100],i,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	if(i%2==1)
sum+=arr[i];
	printf("%d",sum);
}
