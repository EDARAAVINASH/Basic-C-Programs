#include<stdio.h>
void main()
{
    int a[10],n,t,amount,i;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter weights");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("enter t value\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    if(a[i]<=t)
    {
        amount+=1;
    }
    else
    {
        amount+=2;
    }
    printf("%d\n",amount);
}
