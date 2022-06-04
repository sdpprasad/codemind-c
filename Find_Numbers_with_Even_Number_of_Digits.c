#include<stdio.h>
int main()
{
    int i,r,n,s,b=0;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)

{s=0;
    while(a[i]!=0)
    
    {
        r=a[i]%10;
        s++;
        a[i]=a[i]/10;
    }
    if(s%2==0)
    {
        b++;
    }
}
printf("%d",b);
}