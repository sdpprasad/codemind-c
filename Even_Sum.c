#include<stdio.h>
#include<math.h>
int main()
{
	int n;
    scanf("%d",&n);
  	int arr[100],i,o_sum=0,e_sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)
e_sum+=arr[i];}
printf("%d",e_sum);

}