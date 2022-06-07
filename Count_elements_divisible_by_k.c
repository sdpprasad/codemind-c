#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    int a[100],c=0,n;
    for(n=0;n<i;n++)
    {
        scanf("%d",&a[n]);
    }
      for(n=0;n<i;n++)
      {   
          if(a[n]%j==0)
          {
              c+=1;
          }
      }
      printf("%d",c);
}