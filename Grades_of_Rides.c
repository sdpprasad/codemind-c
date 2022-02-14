#include<stdio.h>
int main()
{
    int h,s,sf;
    scanf("%d%d%d",&h,&s,&sf);
    if(h>50 && s>60 &&sf>100)
    printf("%d",10);
   else if(h>50 && s>60 &&sf<=100)
    printf("%d",9);
    else if(h<=50 && s>60 &&sf>100)
    printf("%d",8);
    else if(h>50 && s<=60 &&sf>100)
    printf("%d",7);
    else if(h>50 || s>60 || sf>100)
    printf("%d",6);
    else
    printf("%d",5);
    
}