#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    float i,sum;
    for(i=1;i<=n;i++)
    {
        sum+=1/i;
    }
    printf("%.2f",sum);
    
}