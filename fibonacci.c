#include<stdio.h>
int main()
{
    int i,n,a,b,c,z,f=0;
    scanf("%d",&n);
    
    a=0;                  //fibnoc
    b=1;
    for(i=0;i<n;i++)
    {  c=a+b;
      printf("%d ",a);
        a=b;
        b=c;
    }
  
}